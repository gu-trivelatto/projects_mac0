#include <stdio.h>

int main () {
    int prod_esc = 0;
    int x[3], y[3], mult[3];
    printf ("Entre com o vetor x:");
    for (int i = 1; i <= 3; i++) {
        printf ("\nCoord. %d\n", i);
        scanf ("%d", &x[i]);
        printf ("%d", x[i]);
    }
    printf ("\nEntre com o vetor y:");
    for (int i = 1; i <= 3; i++) {
        printf ("\nCoord. %d\n", i);
        scanf ("%d", &y[i]);
    }
    for (int i = 1; i <= 3; i++) {
        mult[i] = x[i] * y[i];
        prod_esc += mult[i];
    }

    printf ("O produto escalar dos vetores x e y = %d", prod_esc);
return 0;
}
