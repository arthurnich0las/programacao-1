#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age < 16) printf("nao eleitor");
    else if (((age >= 16) && (age < 18)) || (age > 65)) printf("eleitor facultativo");
    else if (age >= 18 && age <= 65) printf("eleitor obrigatorio");

    return 0;
}