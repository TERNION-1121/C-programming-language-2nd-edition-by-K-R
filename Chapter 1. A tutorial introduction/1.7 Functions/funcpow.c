#include<stdio.h>

int power(int base,int n)
{
    int i, p;
        for ( i = 1, p = 1; i <= n; ++i)
            p*=base;
    return p;
}
void main()
{
   int a;

   for ( a = 0; a < 10; ++a)
        printf("%d %d %d\n", a, power(2,a), power(-3,a));
}



