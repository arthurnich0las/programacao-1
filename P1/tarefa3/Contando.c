#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int ContaNumerosPares(int n, int pares)
{
   int resto10, resto2 = (resto10 % 2), aux;

   if (n == 0)
   {
        return pares++;
   }

    else if (n != 0)
    {
        resto10 = (n % 10);

        if (resto10 == 0 || resto10 == 2 || resto10 == 4 || resto10 == 8 || resto10 == 6)
        {
            pares++;
            return ContaNumerosPares(n/10, pares);
        }

        else return ContaNumerosPares(n/10, pares);
    }
   
}

int main()
{
    int n, numeros, pares;

    scanf("%d", &n);

    numeros = ContaNumerosPares(n, 0);

    printf("%d", numeros);
}