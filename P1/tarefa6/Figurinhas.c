#include<stdio.h>

void escanear(int arr[], int tam, int i){
    if (i<tam){
        scanf("%d", &arr[i]);
        escanear(arr, tam, i+1);
    }
    else return;
}

void comparar(int arr[], int tam, int i, int j, int aux){
    if (i<tam){
        if (j<tam){
            if (arr[i] == arr[j]){
                aux = arr[j];
                arr[j] = 0;
            }
            comparar(arr, tam, i, j+1, aux);
        }
        else comparar(arr, tam, i+1, i+2, aux);
    }
    else return;
}

void numero_final(int array[], int tam, int i, int auximpar, int auxpar){
    if (i<tam){
            if (array[i]%2!=0){
                auximpar+=array[i];
                numero_final(array, tam, i+1, auximpar, auxpar);
            }
            if (array[i]%2==0){
                auxpar+=array[i];
                numero_final(array, tam, i+1, auximpar, auxpar);
            }
    }
    else{
        if(auxpar > auximpar) printf("%d\n", auxpar);
        else if (auximpar > auxpar) printf("%d\n", auximpar);
        return;
    }
}

void contador(int arr[], int tam, int i, int contPAR, int contIMPAR){
    if (i<tam){
        if (arr[i]%2 == 0) contPAR+=1;
        else contIMPAR+=1;
        contador(arr, tam, i+1, contPAR, contIMPAR);
    }
    else {
        printf("%d\n%d\n", contPAR, contIMPAR);
        comparar(arr, tam, 0, 1, 0);
        numero_final(arr, tam, 0, 0, 0);
        return;
    }
}

int main(){
    int N;
    scanf("%d", &N);

    int array[N];
    escanear(array, N, 0);

    contador(array, N, 0, 0, 0);
}