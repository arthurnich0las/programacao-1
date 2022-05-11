#include<stdio.h>

void bubble_sort(int arr[], int i, int  j, int tam, int aux)
{
    if (i < tam)
    {
        if (j < tam)
        {
            if (arr[j] < arr[i])
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
            bubble_sort(arr,i, j+1,tam, aux);
        }
        else bubble_sort(arr, i+1, i+2, tam, aux);
    }

    else return;
}

void escanear(int array[], int tam, int i){
    if (i<tam){
        scanf("%d", &array[i]);
        escanear(array, tam, i+1);
    }
    else return;
}

int main(){
    int array[6];
    escanear(array, 6, 0);
    bubble_sort(array, 0, 1, 6, 0);
    printf("%d\n%d", array[0], array[5]);

    return 0;
}