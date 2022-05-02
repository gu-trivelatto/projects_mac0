#include <stdio.h>
int main () {
    int n, ponto;
    float x, y;
    printf ("Quantos pontos? ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf ("Ponto %d: \nx = ", i);
        scanf ("%f", &x);
        printf ("y = ");
        scanf ("%f", &y);
        if ((x * x) + (y * y) <= 1) printf ("O ponto (%1.2f, %1.2f) pertence a H.\n", x, y);
        else printf ("O ponto (%1.2f, %1.2f) nao pertence a H.\n", x, y);
    }
return 0;
}
