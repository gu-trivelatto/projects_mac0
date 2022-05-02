#include <stdio.h>
int main () {
    float termo, soma = 0, neg, negativos = 0, positivos = 0;
    neg = 1;
    for (int i = 10000; i >= 1; i--){
        neg = -neg;
        termo = neg * ((float)1 / i);
        soma = soma + termo;
    }
    printf ("A soma da direita para a esquerda e igual a: %1.3f", soma);
    soma = 0;
    neg = -1;
    for (int i = 1; i <= 10000; i++){
        neg = -neg;
        termo = neg * ((float)1 / i);
        soma = soma + termo;
    }
    printf ("\nA soma da esquerda para a direita e igual a: %1.3f", soma);
    soma = 0;
    neg = -1;
    for (int i = 1; i <= 10000; i++){
        neg = -neg;
        termo = neg * ((float)1 / i);
        if (termo < 0){
            negativos = negativos + termo;
        }
        else {
            positivos = positivos + termo;
        }
        soma = negativos + positivos;
    }
    printf ("\nDa esquerda para a direita os negativos dao %1.3f e os positivos dao %1.3f, e a soma e %1.3f", negativos, positivos, soma);
    negativos = 0;
    positivos = 0;
    soma = 0;
    neg = 1;
    for (int i = 10000; i >= 1; i--){
        neg = -neg;
        termo = neg * ((float)1 / i);
        if (termo < 0){
            negativos = negativos + termo;
        }
        else {
            positivos = positivos + termo;
        }
        soma = negativos + positivos;
    }
    printf ("\nDa direita para a esquerda os negativos dao %1.3f e os positivos dao %1.3f, e a soma e %1.3f", negativos, positivos, soma);
    negativos = 0;
    positivos = 0;
    soma = 0;
return 0;
}
