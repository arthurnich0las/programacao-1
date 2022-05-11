#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mdc(int a, int b){
    if (a>b){
        if (a%b != 0){
            return mdc (b, a%b);
        }
        else if(a%b == 0){
            return b;
        }
    }
    else if (b>a){
        if (b%a != 0) return mdc(a, b%a);
        else if (b%a == 0) return a;
    }
}
int main(){
    int a, b, calc;
    scanf("%d%d", &a, &b);
    calc = mdc(a, b);
    printf("%d\n", calc);
}