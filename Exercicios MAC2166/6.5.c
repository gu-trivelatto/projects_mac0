#include <stdio.h>
#include <math.h>

float distancia (float x, float y, float a, float b);

float distancia (float x, float y, float a, float b) {
    float dist;
    x -= a;
    y -= b;
    dist = x * x + y * y;
    dist = sqrt(dist);
return dist;
}

int main () {
    float x, y, a[100], b[100], raio[100];
    int n;
    printf ("Centro:\nX :");
    scanf ("%f", &x);
    printf ("Y :");
    scanf ("%f", &y);
    printf ("\nNumero de pontos:");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf ("\nPonto %d\nX :", i);
        scanf ("%f", &a[i]);
        printf ("Y :");
        scanf ("%f", &b[i]);
        raio[i] = distancia (x, y, a[i], b[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int k = i + 1; k <= n; k++) {
            if (raio[i] == raio[k]) raio[i] = 0;
            if (raio[i] == 0) k = n + 1;
        }
        if (raio[i] == 0) i = n + 1;
    }
    printf ("\nRaios:\n");
    for (int i = 1; i <= n; i++) {
        if (raio[i] != 0) printf ("\n %1.2f", raio[i]);
    }
return 0;
}
