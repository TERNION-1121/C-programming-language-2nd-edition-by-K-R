#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{ 
    printf("This program will show the ranges of various data types.\n");
    printf("Range of Char %d\n", CHAR_BIT);
    printf("Range of Char Max %d\n", CHAR_MAX);
    printf("Range of Char Min %d\n", CHAR_MIN);
    printf("Range of Int Max %d\n", INT_MAX);
    printf("Range of Int Min %d\n", INT_MIN);
    printf("Range of Long Max %ld\n", LONG_MAX);
    printf("Range of Long Min %ld\n", LONG_MIN);
    printf("Range of Short Max %d\n", SHRT_MAX);
    printf("Range of Short Min %d\n", SHRT_MIN);
    printf("Range of Unsigned Char %u\n", UCHAR_MAX);
    printf("Range of Unsigned Long %lu\n", ULONG_MAX);
    printf("Range of Unsigned Int %u\n", UINT_MAX);
    printf("Range of Unsigned Short %u\n", USHRT_MAX);
    printf("Range of Float Max %f\n", FLT_MAX);
    printf("Range of Float Min %f\n", FLT_MIN);
    printf("Range of Double Max %f\n", DBL_MAX);
    printf("Range of Double Min %f\n", DBL_MIN);
    printf("Range of Long Double Max %lf\n", LDBL_MAX);
    printf("Range of Long Double Min %lf\n", LDBL_MIN);
}