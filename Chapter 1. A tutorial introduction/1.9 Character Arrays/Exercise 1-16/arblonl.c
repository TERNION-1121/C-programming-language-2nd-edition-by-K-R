#include<stdio.h>
#define MAXLINE 10
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
    int len, max, prevmax, getmore;
    char temp[MAXLINE];
    char line[MAXLINE];
    char longest[MAXLINE];

    max = prevmax = getmore = 0;
    while ((len = getl(line, MAXLINE)) > 0 )
    {
        if(line[len - 1] != '\n')
        {
            if(getmore == 0)
                copy(temp,line);
            prevmax+=len;
            if(max < prevmax)
                max = prevmax;
            getmore = 1;
        }
        else
        {
            if(getmore == 1)
            {
                if(max < prevmax + len)
                {
                    max = prevmax + len;
                    copy(longest,temp);
                    longest[MAXLINE - 2] = '\n';
                }
                getmore = 0;
            }
            else if(max < len)
            {
                max = len;
                copy(longest,line);
            }
            prevmax = 0;
        }
    }
    if ( max > 0) /* there was a line */
    {
        printf("Longest line : %s", longest);
        printf("Length of the line is %d", max);
    }
}