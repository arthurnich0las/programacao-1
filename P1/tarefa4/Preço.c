#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int analisar_valor(int dificuldade, double valor, int i, int j){
    if (i <= 3){
        double aux;

        if (dificuldade == 0){
            if (valor > 100){
                aux = valor - (valor*0.25);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.25/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
        else if (dificuldade == 1){
            if (valor > 100){
                aux = valor - (valor*0.20);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.20/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
        else if (dificuldade == 2){
            if (valor > 100){
                aux = valor - (valor*0.18);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.18/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
        else if (dificuldade == 3){
            if (valor > 100){
                aux = valor - (valor*0.15);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.15/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
        else if (dificuldade == 4){
            if (valor > 100){
                aux = valor - (valor*0.12);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.12/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
        else if (dificuldade == 5){
            if (valor > 100){
                aux = valor - (valor*0.10);
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor > 45 && valor <= 100){
                aux = valor - (valor*(0.10/2));
                if (aux < 45){
                    aux = 45;
                }
                valor = aux;
                analisar_valor(dificuldade, valor, i+1, j);
            }
            else if (valor <= 45) analisar_valor(dificuldade, valor, i+1, j);
        }
    }
    else {
        printf("Jogo[%d] = R$%.2lf\n", j, valor);
    }
}

int escanear(double valor[], int dificuldade[], int tam, int i){
    if (i < tam){
        scanf("%d%lf", &dificuldade[i], &valor[i]);
        analisar_valor(dificuldade[i], valor[i], 1, i);
        escanear(valor, dificuldade, tam, i+1);
    }
    return 0;
}

int main() {
    int tam;
    scanf("%d", &tam);

    double jogos[tam];
    int dificuldade[tam];
    escanear(jogos, dificuldade, tam, 0);

	return 0;
}