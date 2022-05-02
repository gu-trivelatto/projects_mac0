#include <stdio.h>

void inteiros (int n, int *num, int *dig) {
    *num = 0;
    *dig = n % 10;
    while (n != 0) {
        n /= 10;
        *num ++;
    }
}

int main() {
    int n, num, dig;
    scanf ("%d", &n);
    inteiros (n, &num, &dig);
    printf ("\n O numero de digitos e %d e o ultimo digito e %d", num, dig);
return 0;
}
