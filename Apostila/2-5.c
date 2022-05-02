#include<stdio.h>
int main(){
    int m, n, impar, soma = 0, imparA, imparB, n3;
    scanf("%d", &m);
    for(n = 1; n <= m; n++){
        n3 = n * n * n;
        soma = 0;
        for(impar = 1; soma != n3; impar = impar + 2){
            imparA = impar;
            for(impar; soma < n3; impar = impar + 2){
                soma = soma + impar;
                imparB = impar;
            }
            impar = imparA;
            if(soma = n3){
                soma = 0;
                printf("\n%d^3 = %d e soma de:\n", n, n3);
                for(imparB; soma < n3; imparB = imparB - 2){
                    soma = soma + imparB;
                    printf("%d ", imparB);
                }
            }
            soma = n3;
        }
    }
return 0;
}
