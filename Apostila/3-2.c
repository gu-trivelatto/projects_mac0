#include <stdio.h>
int main () {
    float n, xHarm, harm = 0;
    scanf ("%f", &n);
    for (float i = 1; i <= n; i++) {
        xHarm = 1 / i;
        harm += xHarm;
    }
    printf ("O harmonico Hn e: %1.3f", harm);
return 0;
}
