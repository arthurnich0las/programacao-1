#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if (x < y && x < z) {printf("%d\n", x);}
    else if (y < x && y < z) {printf("%d\n", y);}
    else if (z < x && z < y) {printf("%d\n", z);}
    else if (x == y || x == y) {printf("%d\n", x);}
    else if (y == z || y == z) {printf("%d\n", y);}
    else if (z == y || z == x) {printf("%d\n", z);}

}