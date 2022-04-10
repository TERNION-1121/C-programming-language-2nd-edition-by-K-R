#include<stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORDS 100   /* The maximum number of words that can be entered */
#define MAX_CHARLIMIT 10 /* The maximum character limit for a word */
void main()
{
    int c, d, i, j, state, wordn, length, lengths[MAX_WORDS];

    state = OUT;
    wordn = length = 0;
    for( i = 0; i < MAX_WORDS; ++i) 
            lengths[i] = 0;         
        while((c = getchar()) != EOF && wordn < MAX_WORDS) 
        {
            if (c == ' ' || c == '\n' || c == '\t')
                state = OUT;

            else if (wordn == 0)
            {
                state = IN;
                ++wordn;
                ++length;
            }

            else if (state == IN) 
                ++length;

            else if (state == OUT) 
            {
                lengths[wordn] = length;
                ++wordn;
                length = 1;
                state = IN;
            }

         }

        lengths[wordn] = length;
        
        for (i = MAX_CHARLIMIT; i >= 1; --i) 
        {
            for ( j = 1; j <= wordn; j++) 
            {
                if ( i <= lengths[j] ) 
                    putchar('*');
                else                
                    putchar(' ');
            }
            putchar('\n'); 
        }

        for (d = 1; d <= wordn; ++d)
                printf("%d", d);
}