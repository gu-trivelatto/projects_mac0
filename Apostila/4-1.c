#include <stdio.h>
int contadigitos (int n, int d){
        int resto, cont = 0;
        while (n > 0){
            resto = n % 10;
            n = n / 10;
            if (resto == d) cont++;
        }
    return cont;
    }
#define TRUE 1
#define FALSE 0
int main () {
    int a, b, contA, contB, perm = TRUE;
    scanf ("%d %d", &a, &b);
    for (int i = 1; i <= 9 && perm == TRUE; i++) {
        contA = contadigitos (a, i);
        contB = contadigitos (b, i);
        if (contA != contB) perm = FALSE;
    }
    if (perm == FALSE) printf ("%d nao e permutacao de %d.", a, b);
    else printf ("%d e permutacao de %d.", a, b);
return 0;
}
