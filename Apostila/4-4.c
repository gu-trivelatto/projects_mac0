#include <stdio.h>
#define TRUE 1
#define FALSE 0
int primo (int n) {
    int primo = TRUE;
    for (int i = 2; i < n && primo == TRUE; i++) {
        if (n % i == 0) primo = FALSE;
    }
return primo;
}
int main () {
    int n, soma = 0, Primo = 0, testePrimo = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i += Primo) {
        testePrimo += 1;
        Primo = primo (testePrimo);
        if (Primo == TRUE) soma += testePrimo;
    }
    printf ("A soma dos %d primeiros primos e %d.", n, soma);
return 0;
}
