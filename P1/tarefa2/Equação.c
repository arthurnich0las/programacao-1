#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    double a, b, c;
    double x1, x2, delta, bhaskara1, bhaskara2;

    scanf("%lf%lf%lf", &a, &b, &c);

    delta = (pow(b, 2)) - (4*a*c);
    bhaskara1 = ((b*-1) + sqrt(delta))/(2*a);
    bhaskara2 = ((b*-1) - sqrt(delta))/(2*a);


    if (a == 0)
    {
        printf("NEESG");
    }

    else if (delta >= 0)
    {
        x1 = bhaskara1;
        x2 = bhaskara2;
        printf("%.2lf\n%.2lf", x1, x2);
    }

    else if (delta < 0)
    {
        printf("NRR");
    }

    return 0;
}