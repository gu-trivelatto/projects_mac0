#include <stdio.h>
int main () {
    int n, total = 0;
    float x, y;
    printf ("Quantos pontos? ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf ("Ponto %d: \nx = ", i);
        scanf ("%f", &x);
        printf ("y = ");
        scanf ("%f", &y);
        if (x = 0) {
            if (y - 3 <= 0) {
                printf ("O ponto (%1.2f, %1.2f) pertence ao conjunto H.", x, y);
                total += 1;
            }
            else printf ("O ponto (%1.2f, %1.2f) nao pertence ao conjunto H.", x, y);
        }
        if (x > 0) {
            if ((y + (x * x) - (2 * x) - 3) <= 0 ) {
                printf ("O ponto (%1.2f, %1.2f) pertence ao conjunto H.", x, y);
                total += 1;
            }
            else printf ("O ponto (%1.2f, %1.2f) nao pertence ao conjunto H.", x, y);
        }
        if (x < 0) {
            if (y <= 0) {
                if ((y + (x * x) + (2 * x) - 3) <= 0 ) {
                    printf ("O ponto (%1.2f, %1.2f) pertence ao conjunto H.", x, y);
                    total += 1;
                }
                else printf ("O ponto (%1.2f, %1.2f) nao pertence ao conjunto H.", x, y);
            }
            else printf ("O ponto (%1.2f, %1.2f) nao pertence ao conjunto H.", x, y);
        }
    }
    printf("Dos %d pontos apenas %d pertencem ao conjunto H.", n, total);
return 0;
}
