#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int NumeroPrimo(int n, int aux)
{
    if (n == 1) printf("0\n");
    else if (n == 2) printf("1\n");
    else if (n == 3) printf("1\n");
    else if (n == 5) printf("1\n");
    else if (n == 7) printf("1\n");
    else if (n%2 == 0) printf("0\n");
    else if (n%3 == 0) printf("0\n");
    else if (n%7 == 0) printf("0\n");
    else if (n%5 == 0) printf("0\n");
    else printf("1\n");
}

int scanff()
{
    int n;
    scanf("%d", &n);
    if (n == -1) return 0;
    else if (n != -1) {
        NumeroPrimo(n, n/2);
        scanff();
    }

}
int main()
{
    scanff();
}