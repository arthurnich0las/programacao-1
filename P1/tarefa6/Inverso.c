#include<stdio.h>

void escanear(int arr[], int tam, int i){
    if (i < tam){
        scanf("%d", &arr[i]);
        escanear(arr, tam, i+1);
    }
    else return;
}

void impressao(int arr[], int tam, int i){
    if (tam > i){
        printf("%d ", arr[tam]);
        impressao(arr, tam-1, i);
    }
    else if (tam == i){
        printf("%d\n", arr[tam]);
        return;
    }
}

int main(){
    int N;
    scanf("%d", &N);

    int array[N];
    escanear(array, N, 0);
    impressao(array, N-1, 0);
}