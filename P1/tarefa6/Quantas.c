#include<stdio.h>

int analisar(int array[], int tam, int i, int inteiro, int contador){
    if (i<tam){
        if (array[i] == inteiro) contador+=1;
        analisar(array, tam, i+1, inteiro, contador);
    }
    else {
        printf("%d", contador);
        return 0;
    }


}

void escanear(int array[], int tam, int i){
    int inteiro, contador;
    if(i < tam){
        scanf("%d", &array[i]);
        escanear(array, tam, i+1);
    }
    else {
        scanf("%d", &inteiro);
    
        analisar(array, 10, 0, inteiro, 0);

        return;
    }
    
}

int main(){
    int array[10];
    
    escanear(array, 10, 0);

    return 0;
}
