#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    float r, pi = 3.14159;
    
    scanf("%f", &r);
    printf("Area = %.4f\n", (pi * (r * r)) / 10000);

    return 0;
}