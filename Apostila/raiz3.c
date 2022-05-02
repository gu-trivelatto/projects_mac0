#include <stdio.h>
float raizCubica (float x) {
    double raiz, rAnt, erro, eps;
    eps = 1e-8;
    rAnt = raiz = x;
    erro = 1;
    while (erro >= eps) {
        raiz = (((float)2 / 3 * rAnt) + (x / (3 * (rAnt * rAnt))));
        erro = rAnt - raiz;
        if (erro < 0) erro = -erro;
        rAnt = raiz;
    }
return raiz;
}
int main () {
    float x;
    scanf ("%f", &x);
    x = raizCubica (x);
    printf ("%f", x);
return 0;
}

