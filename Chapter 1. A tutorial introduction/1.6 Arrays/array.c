#include<stdio.h>
/*Counts how many times a whitespace, any digit or any other character is entered*/
void main()
{
    int c, i, j,  nwhite, nother, ndigit[10] = { 0 };
    
     nwhite = nother = 0;

        /*for(i=0; i < 10; ++i)
        ndigit[i] = 0;*/

        while((c = getchar()) != EOF)
        {
            if(c >= '1' && c <= '9')
                    ++ndigit[c-'0'];
            else if(c == ' ' || c =='\n' || c == '\t')
                    ++nwhite;
            else
                    ++nother;
        }
        printf("Digits: \n");
        for(j = 0, i = 0; i < 10; ++i, ++j)
                    printf("Number of times %d entered: %d\n", j, ndigit[i]);
    printf("\nWhite spaces: %d\nOther: %d", nwhite, nother);
}