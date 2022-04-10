#include<stdio.h>
#define MAXLINE 1000
/* getl: read a line into `line`, return length */
int getl(char line[], int maxline)
{
    int c, len;

    for ( len = 0; len < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++len)
        line[len] = c;
    if ( c == '\n' ) /* newline is encountered */
    {
        line[len] = c;
        ++len;
    }
    line[len] = '\0';
    return len;
}

void reverse(char s[])
{
    int len, i , c;

    for( len = 0; s[len] != '\0'; ++len)
        ;
    for( i = 0; i < (len-1); --len, ++i)
    {
        c = s[i];
        s[i] = s[len-1];
        s[len-1] = c;
    }
}
void main()
{
    int len;
    char line[MAXLINE];
    printf("Enter any input, and you'd get the reversed form of that:\n");
    while ((len = getl(line,MAXLINE)) > 0 )
    {
        if ( line[len-1] == '\n')
            line[len-1] = '\0';
        reverse(line);
        printf("\t%s\n", line);
    }
} 