#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void contador(double varvore, double venfeite[], double quantenfeite[]){
    double vtotal;
    vtotal = varvore + (venfeite[0]*quantenfeite[0]) + (venfeite[1]*quantenfeite[1]) + (venfeite[2]*quantenfeite[2]);
    printf("%.2lf\n", vtotal);
    printf("%.2lf", vtotal/21);

    return;
}

void escanear(double venfeite[], double quantenfeite[], int i){
    double aux;
    if (i < 3){
        scanf("%lf %lf", &quantenfeite[i], &venfeite[i]);
        escanear(venfeite, quantenfeite, i+1);
    }
    return;
}

int main() {
    double varvore, venfeite[3], quantenfeite[3];
    scanf("%lf", &varvore);

    escanear(venfeite, quantenfeite, 0);
    contador(varvore, venfeite, quantenfeite);

	return 0;
}