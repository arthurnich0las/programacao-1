#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculadora(double valor, double vfinal, double frete, double aliquota, double cotacao){
    printf("%.2lf\n", cotacao);

    valor = valor * cotacao;
    printf("%.2lf\n", valor);

    frete = frete * cotacao;
    printf("%.2lf\n", frete);

    double valor_total = valor + frete;
    printf("%.2lf\n", valor_total);

    // if (valor/cotacao >= 2500) {
    //     valor_total = valor;
    // }

    double taxa_importacao = valor_total*0.6;
    // printf("%.2lf\n", taxa_importacao);

    double valor_final;

    if (valor/cotacao >= 2500) {
        taxa_importacao = (valor_total - frete) * 0.6;
        printf("%.2lf\n", taxa_importacao);
        valor_final = (valor_total - frete + taxa_importacao) / (1 - (aliquota/100));
    } 
    else {
        taxa_importacao = valor_total * 0.6;
        printf("%.2lf\n", taxa_importacao);
        valor_final = (valor_total + taxa_importacao) / (1 - (aliquota / 100));
    }

    double ICMS = valor_final * aliquota/100;
    printf("%.2lf\n", ICMS);

    double importacao_total = taxa_importacao + ICMS;
    printf("%.2lf\n", importacao_total);

    double total = valor_total + importacao_total;
    printf("%.2lf\n", total);

    if (valor/cotacao >= 2500){
        printf("Impostos calculados sem o frete");
    }
    else if (valor/cotacao < 2500){
        printf("Impostos calculados com o frete");
    }

}

int main() {
    double valor, vfinal, frete, aliquota;
    double taxa_importacao, cotacao_dolar;

    scanf("%lf%lf%lf%lf", &cotacao_dolar, &aliquota, &valor, &frete);

    calculadora(valor, vfinal, frete, aliquota, cotacao_dolar);

	return 0;
}