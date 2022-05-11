#include<stdio.h>

int primo (int d, int numero){
    if (d < numero){
        if (numero%d == 0) return 0;
        primo(d+1, numero);
    }
    else return 1;
}

double calculo(int d, int numero, double fator1, double fator2, double numerador1, double denominador1, double numerador2, double denominador2, int contador, double valor_final){

    if (numero > 0){
        contador+=1;
        d = 2;
        if (contador == 1){
            valor_final = 1;
        }
        else if (contador == 2){
            fator1 = 2/(3.0);
            numerador1 = 2;
            denominador1 = 3;
            valor_final += fator1;
        }
        else if (contador == 3){
            fator2 = 3/4.0;
            numerador2 = 3;
            denominador2 = 4;
            valor_final += fator2;
        }
        else if (contador > 3 && contador%2 == 0){
            numerador1*=4;
            denominador1+=3;
            fator1 = numerador1/denominador1;
            valor_final += fator1;
        }
        else if (contador > 3 && contador%2 != 0){
            numerador2+=1;
            if (primo(d, numerador2) == 0){
                numerador2+=1;
                primo(d, numerador2);
            }
            denominador2*=4;
            fator2 = numerador2/denominador2;
            valor_final += fator2;
        }
        
        calculo(d, numero-1, fator1, fator2, numerador1, denominador1, numerador2, denominador2, contador, valor_final);
    }

    else {
        printf("S: %.2lf\n", valor_final);
        return valor_final;
    }
}

int main(){
    int d, numero;
    scanf("%d", &numero);
    
    calculo(d, numero, 2/3, 3/4, 0, 0, 0, 0, 0, 0);

    return 0;
}