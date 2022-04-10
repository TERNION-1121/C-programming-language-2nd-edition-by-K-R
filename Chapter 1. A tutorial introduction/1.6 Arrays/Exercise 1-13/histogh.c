#include<stdio.h>
#include<conio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORDS 100
void main()
{
    int c, i, j, state, wordn, length, lengths[MAX_WORDS];

    clrscr();

    state = OUT;
    wordn = length = 0;
    for( i = 0; i < MAX_WORDS; ++i) lengths[i] = 0;
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

    for ( i = 1; i <= wordn; ++i)
        {
            printf("%3d: ", i);
                for (j = 0; j < lengths[i]; ++j)
                    putchar('-');
            putchar('\n');
        }
        
    getch();
}