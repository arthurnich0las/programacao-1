#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    int liv, alun, div;
    scanf("%d%d", &liv, &alun);
    div = alun / liv;
    if (div <= 8 ) {printf("A");}
    else if (div > 8 && div <= 12) {printf("B");}
    else if (div > 12 && div <= 18) {printf("C");}
    else if (div > 18) {printf("D");}
    return 0;
}