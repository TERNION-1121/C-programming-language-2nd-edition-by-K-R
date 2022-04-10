/* Program to replace tab spaces with white spaces */
#include<stdio.h>

#define WSPT 8 /* white spaces per tab */
void main()
{
    int c, counter;
    counter = 0; // distance from previous tab stop

    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            for(int i = 0; i < WSPT - counter; ++i)
                putchar(' '); // print white spaces until reach the next tab stop
            counter = 0; // again at the tab stop's start           
        }
        else{
            putchar(c);
            if(c != '\n')
                counter = (++counter) % WSPT; //move 1 step
            else
                counter = 0; // start of the tab stop again
        }
    }
}