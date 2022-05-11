#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int A, B, C, ai;
    scanf("%d%d%d", &A, &B, &C);
    ai = 2016;
    if (A == B) {printf("S");}
    else if (B == C) {printf("S");}
    else if (A == C) {printf("S");}
    else if ((A + B - C) == 0) {printf("S");}
    else if ((A + C - B) == 0) {printf("S");}
    else if ((B + C - A) == 0) {printf("S");}
    else {printf("N");}
    return 0;
}