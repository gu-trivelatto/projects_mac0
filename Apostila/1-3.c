#include<stdio.h>
int main(){
    int n, atual, teste_impar;
    atual = 2;
    teste_impar = 1;
    scanf("%d", &n);
    if(n == 1){
        printf("%d", teste_impar);
    }
    else{
        printf("%d ", teste_impar);
        while(atual <= n){
            teste_impar = teste_impar + 2;
            printf("%d ", teste_impar);
            atual = atual + 1;
        }
    }
return 0;
}
