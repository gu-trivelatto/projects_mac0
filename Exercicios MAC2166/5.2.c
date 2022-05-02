#include <stdio.h>

int divide (int *m, int *n, int d);

int divide (int *m, int *n, int d) {
    int teste = 0, eme = *m, ene = *n;
    if ((eme % d) == 0){
        teste = 1;
        *m = eme / d;
    }
    if ((ene % d) == 0){
        teste = 1;
        *n = ene / d;
    }
return teste;
}

int main () {
    int m, n, mmc, d, div;
    d = 2;
    mmc = 1;
    scanf ("%d", &m);
    scanf ("%d", &n);
    while (m != 1 || n != 1) {
        div = divide (&m, &n, d);
        if (div == 0) {
            d ++;
        }
        else {
            mmc = mmc * d;
        }
    }
    printf ("O mmc e: %d", mmc);
return 0;
}
