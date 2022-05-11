#include <stdio.h>

void contando_array(int i, int cont, float tamanho[]){
	if(cont < i){
		scanf("%f",&tamanho[cont]);
		
		contando_array(i, cont+1, tamanho);
	}
}

void ordenar_array(int i, int j,int l, float tamanho[]){
	
	if(l < i){
		
		if(i -1 > j){
			float menor = 0;
			menor =(tamanho[j]>=tamanho[j+1])? tamanho[j+1]:tamanho[j];
			tamanho[j+1] = (tamanho[j]>=tamanho[j+1])? tamanho[j]: tamanho[j+1];
			tamanho[j] = menor;
			
			ordenar_array(i,j+1,l,tamanho);
		}
		ordenar_array(i,0,l+1,tamanho);
	}
	
}
int main(){
	float tamanho[4];
	contando_array(4,0,tamanho);
	ordenar_array(4,0,0,tamanho);
	
	printf("%.2f\n",tamanho[0]);
	printf("%.2f\n",tamanho[2]);
	printf("%.2f\n",tamanho[3]);
	printf("%.2f\n",tamanho[1]);
}