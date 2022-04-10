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
    char line[MAXLINE];
    char orig[MAXLINE];

    while ((len = getl(line, MAXLINE)) > 0 )
    {
        copy(orig,line);
        printf("Original:\n%d\n%s", len, orig);

        for (len-=2; len >= 0  && line[len] == ' ' || line[len] == '\t'; --len)
            ;

        ++len;
        line[len] = '\n';
        ++len;
        line[len] = '\0';

        if (len > 1)
            printf("Modified:\n%d\n%s", len, line);
    }
}    