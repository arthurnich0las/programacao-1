#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int fatorial(int n)
{
    if (n == -1) return 0;
    if (n == 0) return 1;
    else if (n > 0 && n <= 12)
    {
        return n * fatorial(n-1);
    }
}

int scanff()
{
    int n, fat;
    scanf("%d", &n);
    if (n != -1)
    {
        fat = fatorial(n);
        printf("%d\n", fat);
        scanff();
    }
    else if (n == -1)
    {
        return 0;
    }
}

int main()
{
    int fat, scan = scanff();
    scan;
}