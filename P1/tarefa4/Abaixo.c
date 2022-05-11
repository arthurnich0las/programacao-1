#include<stdio.h>

int comparar2(int quant_carros, int aux){
    if (quant_carros>2){
        aux+=1;
        return aux;
    }
    else {
        return aux;
    }
}

int comparar(int quant_carros, int aux){
    if (quant_carros>2){
        aux = quant_carros-2;
        return aux;
    }
    else {
        return aux;
    }
}

int escanear(int contador_casa, int contador_carro){
    int quant_carros;
    double valor = 12.89, valor_final;
    scanf("%d", &quant_carros);
    
    if (quant_carros != 999){
        contador_carro += comparar(quant_carros, 0);
        contador_casa += comparar2(quant_carros, 0);
        escanear(contador_casa, contador_carro);
    }
    else {
        valor_final = valor*contador_carro;
        printf("%.2lf\n", valor_final);
        printf("%d", contador_casa);
    }
}

int main(){
    int auxiliar;

    escanear(0, 0);
}