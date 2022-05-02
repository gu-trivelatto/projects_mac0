#include <stdio.h>

int main () {
    int n, a[100];
    scanf ("%d", &n);
    printf ("Coef:");
    for (int i = 0; i <= n; i++) {
        scanf ("%d", &a[i]);
    }
    printf ("A derivada de ");
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            printf ("%d", a[i]);
        }
        else {
            printf ("%dx^%d", a[i], i);
        }
        if (i != n && a[(i + 1)] > 0) printf ("+");
    }
    printf ("\ne: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf ("%d", a[i]);
        }
        else {
            a[i] = a[i] * i;
            printf ("%dx^%d", a[i], i - 1);
        }
        if (i != n && a[(i + 1)] > 0) printf ("+");
    }
return 0;
}
