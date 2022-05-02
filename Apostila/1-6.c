#include<stdio.h>
int main(){
    int n, nota, menor = 100, maior = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &nota);
        if(nota > 100 || nota < 0){
            printf("Nota invalida");
            i = i - 1;
        }
        else{
            if(nota > maior){
                maior = nota;
            }
            if(nota < menor){
                menor = nota;
            }
        }
    }
    printf("\nA maior nota foi %d e a menor nota foi %d", maior, menor);
}
