#include <stdio.h>
int euclides (int a, int b) {
    int resto, mdc;
    if (a > b) {
        while (resto > 0 && a > 0 && b > 0) {
            resto = a % b;
            a = b;
            b = resto;
            mdc = a;
        }
    }
    if (a < b) {
        while (resto > 0 && b > 0 && a >0) {
            resto = b % a;
            b = a;
            a = resto;
            mdc = b;
        }
    }
return mdc;
}
int main () {
    int a, b, n, mdc, AouB = 1;
    scanf ("%d", &n);
    scanf ("%d", &a);
    while (n > 1) {
        if (AouB == 1) {
            scanf ("%d", &b);
            AouB = -AouB;
        }
        else {
            scanf ("%d", &a);
            AouB = -AouB;
        }
        mdc = euclides (a, b);
        printf ("\nO MDC de %d e %d = %d. \n\n", a, b, mdc);
        n--;
    }
return 0;
}
