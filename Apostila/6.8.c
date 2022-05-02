#include <stdio.h>

int main () {
    int m, n, a[100], b[100], c[200], teste = 0;
    scanf ("%d", &m);
    printf ("Insira os %d termos:\n", m);
    for (int i = 1; i <= m; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &n);
    printf ("Insira os %d termos:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &b[i]);
    }
    printf ("Soma das sequencias sem repeticao:");
    for (int i = 1; i <= m; i++) {
        printf ("%d", a[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= m && teste == 0; k++) {
            if (b[i] == a[k]) {
                teste = 1;
            }
        }
        if (teste == 0) printf ("%d", b[i]);
        teste = 0;
    }
return 0;
}
