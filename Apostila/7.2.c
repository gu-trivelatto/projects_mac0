#include <stdio.h>

int main () {
    int n, m, p, a[100][100], b[100][100], prod[100][100], produto, soma = 0;
    scanf ("%d", &m);
    scanf ("%d", &n);
    scanf ("%d", &p);
    printf ("\nMatriz A: \n");
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            printf ("A[%d][%d]", i, k);
            scanf ("%d", &a[i][k]);
        }
    }
    printf ("\nA:\n");
    for (int i = 1; i <= m; i++) {
        printf ("|");
        for (int k = 1; k <= n; k++) {
            printf (" %d ", a[i][k]);
        }
        printf ("|\n");
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= p; k++) {
            printf ("B[%d][%d]", i, k);
            scanf ("%d", &a[i][k]);
        }
    }
    printf ("\nB:\n");
    for (int i = 1; i <= n; i++) {
        printf ("|");
        for (int k = 1; k <= p; k++) {
            printf (" %d ", a[i][k]);
        }
        printf ("|\n");
    }
    for (int i = 1; i <= p; i++) {
        for (int k = 1; k <= m; k++) {
            for  (int g = 1; g <= n; g++) {
                produto = a[m][n] * b[n][p];
                soma += produto;
            }
        prod[k][i] = soma;
        soma = 0;
        }
    }
    printf ("\nProduto de A por B:\n");
    for (int i = 1; i <= m; i++) {
        printf ("|");
        for (int k = 1; i <= p; i++) {
            printf (" %d ", prod[i][k]);
        }
        printf ("|\n");
    }
}
