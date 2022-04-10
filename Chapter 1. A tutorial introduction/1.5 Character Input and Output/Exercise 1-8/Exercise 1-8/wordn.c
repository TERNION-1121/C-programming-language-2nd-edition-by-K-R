#include<stdio.h>
#include<conio.h>
void main()
{
    int c, inspace;
        inspace = 0;

    while( (c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(inspace = 0){
                    inspace = 1;
                    putchar('\n');
                }
            //else it'll print nothing
         }
         else{
             inspace = 0;
             putchar(c);
             putchar('\n');
         }
    }

}
