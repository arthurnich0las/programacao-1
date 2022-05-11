#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    double n1, n2;
    scanf("%lf", &n1);
    n2 = (n1 * 0.1);
    printf("%.2lf\n", n1 + n2);
    return 0;
}