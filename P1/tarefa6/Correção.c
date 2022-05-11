#include<stdio.h>
#include<string.h>

void comparar(char gabarito[], int array[], int notas[]);

// void guardar_notas(int array[], int nota, int notas[10000]){
//     notas[array[0]] = nota;
//     return;
// }

int analisar2(int n, int tam, int notas[], int i, int cont){
    if (i<tam){
        if(notas[i] == n) cont+=1;
        analisar2(n, tam, notas, i+1, cont);
    }
    else {
        return cont;
    }
}

int analisar1(int aux1, int tam, int notas[], int i, double nota_frequente){
    int resultado;
    if (i==tam){
        return nota_frequente;
    }
    else if (notas[i] != nota_frequente){
        resultado = analisar2(notas[i], tam, notas, 0, 0);
        if (resultado > aux1){
            nota_frequente = notas[i];
            aux1 = resultado;
        }
    }
    analisar1(aux1, tam, notas, i+1, nota_frequente);
}

int escanear(char gabarito[], char respostas[], int tam, int i, double contador, int array[], int notas[]){
    if (i<tam){
        if (respostas[i] == gabarito[i]) {
            contador+=1;
            escanear(gabarito, respostas, tam, i+1, contador, array, notas);
        }
        else escanear(gabarito, respostas, tam, i+1, contador, array, notas);
    }

    else{
        array[0]++;
        notas[array[0]-1] = contador;
        if (contador >= 6.0) array[1]++;
        return contador;
    } 
}

void comparar(char gabarito[], int array[], int notas[]){
    int aluno;
    float contador;
    double porcentagem;

    char respostas[10];

    scanf("%d", &aluno);

    if (aluno != 9999){
        scanf("%s", respostas);
        getchar();
        contador = escanear(gabarito, respostas, 10, 0, 0, array, notas);
        printf("%d %.1f\n", aluno, contador);
        comparar(gabarito, array, notas);
    }

    else if (aluno == 9999){
        porcentagem = ((array[1]*100)/(array[0]*1.0));
        printf("%.1f%%\n", porcentagem);

        int taldo = analisar1(0, array[0], notas, 0, 0);
        printf("%d.0", taldo);

        return;
    } 
}

int main(){
    char gabarito[10];
    scanf("%s", gabarito);
    getchar();

    int array[3], notas[10000];
    array[0] = 0;
    array[1] = 0;
    array[2] = 0;

    comparar(gabarito, array, notas);

    return 0;
}