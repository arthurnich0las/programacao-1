#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int euclides(int a, int b){
    int resto, vf;
    if (a>b){ 
        if (a%b == 0)
            {
                return b;
            }
        else if (a%b != 0){
                return euclides(b, a%b);
            }
    }
    else if(b>a){
        if (b%a == 0)
            {
                return a;
            }
        else if (b%a != 0){
                return euclides(a, b%a);
            }
    }
}

int scanff(int casos)
{
    int a, b;
    if (casos == 1){
        scanf("%d%d", &a, &b);
        euclides(a, b);
        printf("MDC(%d,%d) = %d", a, b, euclides(a, b));
        return 0;
    }
    if (casos != 1){
        scanf("%d%d", &a, &b);
        euclides(a, b);
        printf("MDC(%d,%d) = %d\n", a, b, euclides(a, b));
        return scanff(casos-1);
    }
}

int main()
{
    int casos;

    scanf("%d", &casos);
    scanff(casos);
}