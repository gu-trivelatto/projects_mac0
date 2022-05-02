#include<stdio.h>
int main(){
    int n, num, soma = 0;
    printf("Quantos numeros?");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        if(num % 2 == 0) soma = soma + num;
    }
    printf("A soma e %d", soma);
return 0;
}
