#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ler_valores(double x[], int i, int tam){
    if (i < tam){
        scanf("%lf", &x[i]);
        ler_valores(x, i+1, tam);
    }
    return 0;
}

void comparar(double valor[], int i, int contador, int tam){
    if(i < tam){
        if (valor[i]*0.8 >= valor[i+1]){
            comparar(valor, i+2, contador+1, tam);
        }
        else {
            comparar(valor, i+2, contador, tam);
        }
    }
    else {
        printf("%d", contador);
        return;
    }

}

int main() {
    double valores[10];
    int quantidade = 0;

    ler_valores(valores, 0, 10);

    comparar(valores, 0, 0, 10);

	return 0;
}