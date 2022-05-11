#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    float n1, n2;
    scanf("%f", &n1);
    n2 = (n1 - 32) / 1.8;
    printf("%.2f\n", n2);
    return 0;
}