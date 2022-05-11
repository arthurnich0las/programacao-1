#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double litros;
    double preco, desconto;
    char tipo;

    scanf("%lf", &litros);
    scanf(" %c", &tipo);

    if (tipo == 'A')
    {
        preco = 1.90*litros;

        if (litros <= 20) desconto = preco * 0.97;
        else if (litros > 20) desconto = preco * 0.95;
    }

    else if (tipo == 'G')
    {
        preco = 2.5 * litros;

        if (litros <= 20) desconto = preco * 0.96;
        else if (litros > 20) desconto = preco * 0.94;
    }

    else if (tipo == 'D')
    {
        preco = 1.66 * litros;

        if (litros <= 25) desconto = preco;
        else if (litros > 25) desconto = preco * 0.96;
    }

    printf("R$ %.2lf", desconto);
    return 0;
}