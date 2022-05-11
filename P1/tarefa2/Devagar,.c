#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() 
{
    int vcomp, pontos;
    double vatual, vmax, multa;
    
    scanf("%lf%lf", &vmax, &vatual);

    if (vatual < vmax * 1.2 && vatual > vmax)
    {
        multa = 85.13;
        pontos = 4;
    }
    else if (vatual == vmax + vmax * 0.2)
    {
        multa = 85.13;
        pontos = 4;
    }
    else if (vatual > vmax * 1.2 && vatual <= vmax * 1.5)
    {
        multa = 127.69;
        pontos = 5;
    }
    else if (vatual > vmax * 1.5)
    {
        multa = 574.62;
        pontos = 7;
    }
    printf("%.2lf\n%d\n", multa, pontos);
    return;
}