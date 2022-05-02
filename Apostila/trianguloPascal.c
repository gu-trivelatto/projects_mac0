#include <stdio.h>

int fat (int m);
int comb (int m, int n);

int fat (int m) {
    int fat = 1;
    for (int i = 1; i <= m; i++) {
        fat *= i;
    }
return fat;
}

int comb (int m, int n) {
    int comb = 0;
    if (m >= n) {
        comb = fat (m) / (fat (n) * fat (m - n));
    }
return comb;
}

int main () {
    int n, com;
    scanf ("%d", &n);
    com = 1;
    printf ("%3d\n", com);
    for (int i = 1; i <= n; i++) {
        for (int t = 0; t <= i; t++) {
            com = comb (i, t);
            printf ("%3d", com);
        }
        printf ("\n");
    }
return 0;
}
