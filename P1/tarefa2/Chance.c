#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int pp, pr;
    double ppr, ca;
    scanf("%d%d", &pp, &pr);
    ppr = (pr * 100.0) / pp;
    if (ppr < 20)
    {
        ca = 4.40;
        printf("%.2lf%% %.2lf%% Pessimo", ppr, ca);
    }
    else if (ppr >= 20 && ppr < 40)
    {
        ca = 31.65;
        printf("%.2lf%% %.2lf%% Ruim", ppr, ca);
    }
    else if (ppr >= 40 && ppr < 60)
    {
        ca = 56.82;
        printf("%.2lf%% %.2lf%% Bom", ppr, ca);
    }
    else if (ppr >= 60 && ppr < 80)
    {
        ca = 80.00;
        printf("%.2lf%% %.2lf%% Muito Bom", ppr, ca);
    }
    else if (ppr >= 80 && ppr <= 100)
    {
        ca = 94.00;
        printf("%.2lf%% %.2lf%% Excelente", ppr, ca);
    }
}