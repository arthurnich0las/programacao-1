#include<stdio.h>
#include<string.h>

void inverter(char string[], int tam, int i){
    if (i >0){
        printf("%c", string[i]);
        i-=1;
        inverter(string, tam, i);
    }
    else if(i == 0){
        printf("%c\n", string[i]);
        return;
    }
}

int main(){
    char string[255];
    // scanf("%[^\n]", string);
    fgets(string, 255, stdin);
    
    inverter(string, 255, (strlen(string)-1));
}