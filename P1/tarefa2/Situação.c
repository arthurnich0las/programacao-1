#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int n1, n2, n3;
    double media;
    scanf("%d%d%d", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0;
    if (media >=40 && media <= 70) {printf("A media do aluno foi %.2lf e ele foi FINAL", media);}
    else if (media >= 0 && media < 40) {printf("A media do aluno foi %.2lf e ele foi REPROVADO", media);}
    else if (media > 70 && media <= 100) {printf("A media do aluno foi %.2lf e ele foi APROVADO", media);}
    else {printf("Media invalida");}

}