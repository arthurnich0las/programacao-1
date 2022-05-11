#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int algoritmo(int N, int T, int contador){
    if (contador == T){
        printf("%d", N);
        return 0;
    }
    else if (contador%2 == 0){
        return algoritmo(N+3, T, contador+1);
    }
    else if (contador%2 != 0){
        return algoritmo(N+(N%5), T, contador+1);
    }
}

int main(){
    int N, T;
    scanf("%d%d", &N, &T);

    algoritmo(N, T, 0);
}