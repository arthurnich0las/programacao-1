#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int media_ponderada(double nota_A, double nota_B)
{
   
    printf("MEDIA = %.5lf\n", ((nota_A * 3.5) + (nota_B * 7.5)) / 11);
}

int main(double nota_A, double nota_B)
{
    scanf("%lf", &nota_A);
    scanf("%lf", &nota_B);
    media_ponderada(nota_A, nota_B);
	return 0;
}