#include <stdio.h>

#define MAXLINE 1000 /* max input line size */
    
char line[MAXLINE]; /*current input line*/

int getline(void);  /* taken from the KnR book. */

void main()
{
    int t, len;
    int location, spaceholder;
    const int FOLDLENGTH = 7;

    while((len = getline()) > 0)
    {
        if(len < FOLDLENGTH) /* Length is less than the constant value */
            ;
        else{ /* the length is more, looping starts */
            t = 0;
            location = 0;

            while( t < len)
            {
                if( line[t] == ' ') /* there is blank space encountered */
                    spaceholder = t;
                
                if(location  == FOLDLENGTH) /* value of location becomes same as the constant variable's value */
                {
                    line[spaceholder] = '\n';
                    location = 0;
                }
                location++;
                t++;
            }
        }
        printf("%s", line);
    }
}
/* getline: specialized version */
int getline(void)
{
    int c, i;
    extern char line[];

    for( i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n')
    {
        line[i] = c; 
        i++;
    }
    line[i] = '\0';
    return i;
}