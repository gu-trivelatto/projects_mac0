#include<stdio.h>
int main(){
    int n, p, soma;
    p = 1;
    soma = 0;
    scanf("%d", &n);
    while(p <= n){
        soma = soma + p;
        p = p + 1;
    }
    printf("%d", soma);
return 0;
}
