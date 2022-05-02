#include <stdio.h>
int main () {
    float x, eps = 0.00001,  cos = 1, a = 1, aAnt = a, erro = 1;
    int y = 1;
    scanf ("%f", &x);
    for (int i = 1; erro >= eps; i++) {
        aAnt = -(a * x * x / ((2 * i - 1) * (2 * i)));
        cos = cos + aAnt;
        erro = a - aAnt;
        if (erro < 0) erro = -erro;
        a = aAnt;
    }
    printf ("%1.3f", cos);
return 0;
}
