#include <stdio.h>

int main () {
    int n, a[100], b[100], soma[100], resto = 0;
    soma[0] = 0;
    a[0] = 0;
    b[0] = 0;
    scanf ("%d", &n);
    printf ("Insira os %d algarismos do primeiro numero:", n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("Insira os %d algarismos do segundo numero:", n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &b[i]);
    }
    for (int i = n; i >= 0; i--) {
        soma[i] = a[i] + b[i];
        if (resto != 0) {
            soma[i] += resto;
            resto = 0;
        }
        if (soma[i] > 9) {
            resto = soma[i] / 10;
            soma[i] = soma[i] % 10;
        }
    }
    printf ("A soma e:\n");
    if (soma[0] != 0) printf ("%d", soma[0]);
    for (int i = 1; i <= n; i++) {
        printf ("%d", soma[i]);
    }
return 0;
}
