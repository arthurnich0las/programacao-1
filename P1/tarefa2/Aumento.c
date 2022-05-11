#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    double salario, aumento;

    scanf("%lf", &salario);

    aumento = 0;
    if (salario > 500)
    {
        aumento = salario + (0.10 * salario);
        printf("%.2lf", aumento);
    }
    else if (salario > 300 && salario < 500)
    {
        aumento = salario + (0.07 * salario);
        printf("%.2lf", aumento);
    }
    else 
    {
        aumento = salario +  (0.05 * salario);
        printf("%.2lf", aumento);
    }
}