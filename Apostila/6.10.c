#include <stdio.h>

int main () {
    int n, k, a[100], x[100], mult[100], soma = 0;
    x[0] = 0;
    printf ("Entre com n:");
    scanf ("%d", &n);
    printf ("\nInsira os coeficientes A de 0 a %d: ", n);
    for (int i = 0; i <= n; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("Insira o numero K de pontos: ");
    scanf ("%d", &k);
    printf ("\nInsira os K pontos: ");
    for (int i = 1; i <= k; i++) {
        scanf ("%d", &x[i]);
    }
    for (int i = 1; i <= k; i++) {
        printf ("\nPara X = %d, o valor e:", x[i]);
        for (int c = 0; c <= n; c++) {
            if (c == 0) {
                soma += a[c];
            }
            if (c == 1) {
                mult[i] = x[i];
                a[c] = a[c] * mult[i];
                soma += a[c];
            }
            if (c > 1) {
                mult[i] = mult[i] * x[i];
                a[c] = a[c] * mult[i];
                soma += a[c];
            }
        }
    printf ("%d", soma);
    soma = 0;
    }
return 0;
}
