#include<stdio.h>

#define MAXLINE 1000
char line[MAXLINE];

int getline(void);

void main()
{
    int in_comment, in_quote;
    int len, t;

    in_comment = in_quote = t = 0;
    while((len = getline()) > 0)
    {
        t = 0;
        
        while( t < len)
        {
            if( line[t] == '"')
                in_quote = 1;
            
            if( ! in_quote) /* in_quote's value is 0 */
            {
                if(line[t] == '/' && line[t+1] == '*') /* starting multiline comment is encountered */
                {
                    t+=2;
                    in_comment = 1;
                }
                if(line[t] == '"' && line[t+1] == '/') /* ending multiline comment is encountered */
                {
                    t+=2;
                    in_comment = 0;
                }
                if(in_comment == 1) /* cursor is still in the comment */
                    t++; 
                else{ /* not in the comment */
                    printf("%c", line[t]);
                    t++;
                }
            }
            else
            {
                printf("%c", line[t]);
                t++;
            }
        }
    }

}
/* getline: specialized version */
int getline(void)
{
    int c, i;
    extern char line[];

    for( i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c; 
    if( c == '\n')
    {
        line[i] = c; 
        i++;
    }
    line[i] = '\0';
    return i;
}