#include <stdio.h>

int main () {
    float seq[100];
    int n, teste = 0, rep = 1;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%f", &seq[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int k = i; k >= 1; k--) {
            if (seq[k] == seq[(k - 1)]) teste = 1;
        }
        if (teste == 0) {
            for (int k = i + 1; k <= n; k++) {
                if (seq[k] == seq[i]) rep++;
            }
        printf ("%f se repete %d vezes\n", seq[i], rep);
        rep = 1;
        }
    }
return 0;
}
