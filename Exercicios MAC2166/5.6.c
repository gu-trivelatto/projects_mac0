#include <stdio.h>

void valor (int k, int * f1, int * f2, int * g1, int * g2);

void valor (int k, int * f1, int * f2, int * g1, int * g2) {
    int fk, gk;
    for (int i = 3; i <= k; i++) {
        fk = 2 * *f2 + *g1;
        gk = *g2 + 3 * *f1;
        *f1 = *f2;
        *g1 = *g2;
        *f2 = fk;
        *g2 = gk;
        printf ("%d e %d \n", *f2, *g2);
    }
}

int main () {
    int n, nmax, f02, f200, g02, g200, *g1 = 1, *f2 = 1, *g2 = 2, *f1 = 2;
    scanf ("%d", &n);
    nmax = n + 20;
    n -= 2;
    for (int i = n; i <= nmax; i++){
        valor (i, &f1, &f2, &g1, &g2);

    }
return 0;
}
