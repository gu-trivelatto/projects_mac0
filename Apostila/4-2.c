#include <stdio.h>
#define TRUE 1
#define FALSE 0
int encaixa (int a, int b) {
    int encaixa = TRUE;
    while (b > 0 && encaixa == TRUE) {
        if (a % 10 == b % 10) {
            a /= 10;
            b /= 10;
        }
        else encaixa = FALSE;
    }
return encaixa;
}
int main () {
    int a, b, A, B, seg = FALSE;
    scanf ("%d %d", &a, &b);
    if (a > b) {
        A = a;
        while (a > b && seg == FALSE) {
            if (a % 10 == b % 10) {
                seg = encaixa (a, b);
                if (seg == FALSE) a /= 10;
            }
            else a /= 10;
        }
        if (seg == TRUE) printf ("%d e segmento de %d", b, A);
        else printf ("%d nao e segmento de %d", b, A);
    }
    else {
        B = b;
        while (a < b && seg == FALSE) {
            if (a % 10 == b % 10) {
                seg = encaixa (b, a);
                    if (seg == FALSE) a/= 10;
            }
            else b /= 10;
    if (seg == TRUE) printf ("%d e segmento de %d", a, B);
    else printf ("%d nao e segmento de %d", a, B);
    }
return 0;
}
