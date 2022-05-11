#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int codigo, qc;
    double desconto;
    scanf("%d%d", &codigo, &qc);
    if (codigo == 1)
    {
        desconto = (5.3 * qc) * 0.15;
            if (qc >= 15 || 5.3 * qc >= 40){printf("R$ %.2lf\n", 5.3 * qc - desconto);}
            else { printf("R$ %.2lf\n", (5.3 * qc));}
    }
    else if (codigo == 2)
    {
        desconto = (6 * qc) * 0.15;
            if (qc >= 15 || 6 * qc >= 40){printf("R$ %.2lf\n", 6 * qc - desconto);}
            else {printf("R$ %2.d\n", 6 * qc);}
    }
    else if (codigo == 3)
    {
        desconto = (3.2 * qc) * 0.15;
        if (qc >= 15 || 3.2 * qc >= 40){printf("R$ %.2lf\n", 3.2 * qc - desconto);}
        else {printf("R$ %.2lf\n", 3.2 * qc);}
    }
    else 
    {
        desconto = (2.5 * qc) * 0.15;
        if (qc >= 15 || 2.5 * qc >= 40){printf("R$ %.2lf\n", 2.5 * qc - desconto);}
        else {printf("R$ %.2lf\n", 2.5 * qc);}
    }
}