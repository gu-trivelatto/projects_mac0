#include <stdio.h>

int main () {
    int n, v[100];
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &v[i]);
    }
    for (int i = n; i >= 0; i--) {
        printf ("%d   ", v[i]);
    }
return 0;
}
