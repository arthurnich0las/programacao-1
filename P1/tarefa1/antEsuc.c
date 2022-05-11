#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma_e_subtracao (int n1)
{
    printf("%d ", n1 - 1);
    printf("%d\n", n1 + 1);

}

int main(int n1)
{
    scanf("%d", &n1);
    soma_e_subtracao(n1);
	return 0;
}