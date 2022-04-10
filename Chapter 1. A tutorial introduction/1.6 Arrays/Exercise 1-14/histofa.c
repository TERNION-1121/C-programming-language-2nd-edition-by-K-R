#include<stdio.h>
#include<conio.h>

#define  MAX 122
#define  MIN 97 
#define  DIFF 32
void main()
{
    int c, i, j, alpha[MAX-MIN];

    //clrscr();

    for( i = MIN; i <= MAX; ++i)
        alpha[i] = 0;
    
    while((c = getchar()) != EOF)
    {
        if ( c >= MIN)
            ++alpha[c];
        else 
            ++alpha[c + DIFF];
    }

    for (i = MIN; i <= MAX; i++)
    {
        printf("|%c%c| ", i - DIFF, i);
            for (j = 1; j <= alpha[i]; ++j)
                putchar('#');
        putchar('\n');
    }

    getch();
    
}