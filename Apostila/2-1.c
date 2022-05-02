#include<stdio.h>
int main(){
    int seq, n, soma = 0;
    printf("Sequencias:");
    scanf("%d", &seq);
    for(int i = 1; i <= seq; i++){
        while(n != 0){
            printf("N: ");
            scanf("%d", &n);
            if(n % 2 == 0){
                soma = soma + n;
            }
        }
    printf("A soma da sequencia %d e %d\n", i, soma);
    soma = 0;
    n = 1;
    }
return 0;
}
