#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contando_array(int i, int j, int quant_limit, int cont, int verificador){
	if(i > j){
		int sai, entra;
		char input[9];
		char *partes;
		
		gets(input);
		
		partes = (char*)strtok(input," ");
			
			
		sai = atoi(partes);
		//	printf("sai %d\n",sai);
			
		partes = (char*)strtok(NULL," ");
		
			
		entra = atoi(partes);
		//	printf("entra %d\n",entra);
			
		verificador = (entra + verificador) - sai;
 	   	   // printf("verificador %d\n",verificador);
 	   	    
		cont += (verificador > quant_limit)? 1 : 0;
			//printf("cont %d\n",cont);
		
	
	cont = contando_array(i, j+1, quant_limit, cont, verificador);
		
	}
    
    return cont;
}

int main(){
	int i, quant_limit, out;
	char input[9];
	char *partes;
	
	gets(input);
	
	partes = (char*)strtok(input," ");
	
	i = atoi(partes);
		
		
	partes = (char*)strtok(NULL," ");
	
		
	quant_limit = atoi(partes);

	if(contando_array(i,0,quant_limit,0,0) > 0)
	    printf("S\n");
	else 
	    printf("N\n");
	    
	return 0;
	
}