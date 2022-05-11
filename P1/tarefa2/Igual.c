#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    if (x == y && x == z) printf("1");
    else if (x != y && x != z && y != z) printf("2");
    else if (x == y || y == z || x == z) printf("3");

    return 0;
}