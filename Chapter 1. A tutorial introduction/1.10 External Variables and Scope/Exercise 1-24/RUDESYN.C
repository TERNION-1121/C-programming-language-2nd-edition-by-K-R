#include<stdio.h>
#define MAXLINE 1000

char line[MAXLINE];

int getline(void);

void main()
{
    int len = 0, t = 0;
    int sbracket = 0, cbracket = 0, parenthesis = 0;
    int s_quote = 1, d_quote = 1;

    printf("Enter any C code in this program and this would check if the number of {, [, (, \', \" appears to be correct or not:");
    while((len = getline()) > 0)
    {
	t = 0;
	while ( t < len)
	{
	    switch (line[t])
	    {
	    case '[':
		sbracket++;
		break;
	    case ']':
		sbracket--;
		break;
	    case '{':
		cbracket++;
		break;
	    case'}':
		cbracket--;
		break;
	    case '(':
		parenthesis++;
		break;
	    case ')':
		parenthesis--;
		break;
	    case '\'':
		s_quote*=-1;
		break;
	    case '\"':
		d_quote*=-1;
		break;
	    }
	    t++;
	}
    }
    if(d_quote != 1)
	printf("Mismatching double quote mark\n");
    if(s_quote != 1)
	printf("Mismatching single quote mark\n");
    if(parenthesis != 0)
	printf("Mismatching parenthesis mark\n");
    if(sbracket != 0)
	printf("Mismatching square brace mark\n");
    if(cbracket != 0)
        printf("Mismatching curly brace mark\n");
    
    if( sbracket == 0 && cbracket == 0 && s_quote == 1 && d_quote == 1 && parenthesis == 0)
        printf("Syntax appears to be correct.\n");
}
int getline(void)
{
    int c, i;
    extern char line[];
    for( i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n')
    {
        line[i] = c; 
        i++;
    }
    line[i] = '\0';
    return i;
}