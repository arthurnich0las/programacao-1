#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int age, x;
    scanf("%d", &age);
    x = age * 365 * 24 * 3600;
    printf("%d\n", x);
    return 0;
}