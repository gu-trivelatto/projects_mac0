#include<stdio.h>
int main(){
    int a, b, resto, div, divd, mdc;
    resto = 1;
    scanf("%d %d", &a, &b);
    if(a > b){
        div = b;
        divd = a;
    }
    else{
        div = a;
        divd = b;
    }
    while(resto != 0){
        resto = divd % div;
        divd = div;
        div = resto;
        if(resto != 0){
            mdc = resto;
        }
    }
    printf("O mdc de %d e %d e %d", a, b, mdc);
return 0;
}


