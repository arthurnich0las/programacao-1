#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int n, h;
    double sh, sf;
    scanf("%d %d", &n, &h);
    scanf("%lf", &sh);
    sf = h * sh;
    printf("NUMBER = %d\n", n);
    printf("SALARY = R$ %.2lf\n", sf);
    return 0;
}