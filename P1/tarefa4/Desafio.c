#include<stdio.h>

int ler_numeros(int numeros, int contador);
int comparar(int numeros, int contador, int aux);

int ler_numeros(int numeros, int contador){
    scanf("%d", &numeros);
    if (numeros > 0){
        int aux = numeros;
        comparar(numeros, contador, aux);
    }
    else if(numeros == 0){
        return contador;
    }
}

int comparar(int numeros, int contador, int aux){
    if (numeros > contador){
        contador = numeros;
        ler_numeros(numeros, contador);
    }
    else {
        ler_numeros(numeros, contador);
    }
} 

int main(){
    int numeros, contador = 0, final;

    final = ler_numeros(numeros, contador);

    printf("%d", final);
}