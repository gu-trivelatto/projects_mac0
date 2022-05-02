#include <stdio.h>
int main () {
    float n, N, soma = 0;
    scanf("%f", &n);
    for (int i = 1; i <= n; i++) {
        N = i / (n - i + 1);
        soma += N;
    }
    printf ("\n%1.2f", soma);
return 0;
}
