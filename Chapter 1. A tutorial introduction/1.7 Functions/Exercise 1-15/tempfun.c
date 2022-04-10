#include<stdio.h>

#define LOWER 0 
#define UPPER 300
#define STEP 20

float tempconvert(float fahrenheit)
{
    float celsius;
    celsius = ( 5.0/9.0 ) * ( fahrenheit-32.0 );

    return celsius;
}

void main()
{
   float fahrenheit, celsius;
        for ( fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit+=20)
            printf("%3.f %6.1f\n", fahrenheit, tempconvert(fahrenheit));
}