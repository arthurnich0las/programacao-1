#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int V, pot;
    scanf("%d", &V);
    if (V >= 1 && V <= 20) {pot = 20 + (V * V * V); printf("Potencia de : %d W", pot);}
    else if(V >=21 && V <= 40) {pot = 8000 + (V - 10) * (V - 10); printf("Potencia de : %d W", pot);}
    else if (V >= 41 && V <= 60) {pot = 9000 + 5*V; printf("Potencia de : %d W", pot);}
    else if (V >= 61 && V <= 80) {pot = 9300 + 2*V, printf("Potencia de : %d W", pot);}
    else if (V >= 81 && V <= 100) {pot = 9500 + V, printf("Potencia de : %d W", pot);}
    else {return 0;}
}