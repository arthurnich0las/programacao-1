#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    double x, y, lim, lip, lib;
    scanf("%lf\n %lf", &x, &y);
    lim = (y * 100.0) / x;
    if (lim > 30.00)
    {
        lib = 0.00;
        printf("%.2lf", lib);
    }
    else if (lim <= 30.00)
    {
        lip = 30.00 - lim;
        lib = (x * lip) / 100.0;
        printf("%.2lf", lib);
    }
}