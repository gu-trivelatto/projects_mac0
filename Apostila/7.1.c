#include <stdio.h>

int main () {
    int a[100][100], v[100], produto = 1, soma = 0, m, n, res[100];
    scanf ("%d", &m);
    scanf ("%d", &n);
    printf ("Matriz:");
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            printf ("\nA[%d][%d]: ", i, k);
            scanf ("%d", &a[i][k]);
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            printf ("%d", a[i][k]);
        }
    printf ("\n");
    }
    printf ("\nVetor:");
    for (int i = 1; i <= m; i++) {
        printf ("\nV[%d]: ", i);
        scanf ("%d", &v[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= m; k++) {
            produto = v[k] * a[k][i];
            soma = soma + produto;
        }
        res[i] = soma;
        soma = 0;
    }
    for (int i = 1; i <= n; i++) {
        printf ("%d", res[i]);
    }
return 0;
}
