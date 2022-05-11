#include<stdio.h>

void analisar(int n1, int n2, int tam, int contador){
    if (tam != 0){
        if ((tam%n1 == 0) && (tam%n2 == 0)){
            contador+=1;
        }
        analisar(n1, n2, tam-1, contador);
    }
    else if (tam == 0){
        printf("%d", contador);
        return;
    }  
}

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    analisar(n1, n2, 49, 0);
}