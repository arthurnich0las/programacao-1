#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int student, elder;

    scanf("%d%d", &student, &elder);

    if (student == 1 || elder == 1) printf("1");
    else printf("0");

    return 0;
}