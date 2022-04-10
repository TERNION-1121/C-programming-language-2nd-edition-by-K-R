#include<stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 11
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
/* copy: copy `from` into `to`; assume `to` is big enough */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void main()
{
    int len;
    int max; 
    char line[MAXLINE];
    char above80[MAXLINE];

    max = 0;
    while ((len = getl(line, MAXLINE)) > 0 )
    {
        if ( len > MAXLENGTH) 
        {
            printf("LINE-CONTENTS:\t%s\n", line);
        }
    }
}