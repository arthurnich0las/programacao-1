#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main ()
{
    int x, y;
    scanf("%d\n%d", &x, &y);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", (x > y), (x == y), (x < y), (x != y), (x >= y), (x <= y));
    return 0;
}