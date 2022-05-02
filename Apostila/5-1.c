#include <stdio.h>

int digitos (int n);
int primeiro (int n);

int digitos (int n) {
    int digitos = 0;
    while (n > 0) {
        n /= 10;
        digitos += 1;
    }
return digitos;
}

int primeiro (int n) {
    int primeiro;
    while (n > 0) {
        primeiro = n % 10;
        n /= 10;
    }
return primeiro;
}

int main () {
    int n, num, prim, dig;
    printf ("Quantidade de numeros: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &num);
        prim = primeiro (num);
        dig = digitos (num);
        printf ("%d %d\n", prim, dig);
    }
return 0;
}
