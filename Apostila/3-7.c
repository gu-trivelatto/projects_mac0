#include <stdio.h>
int main () {
    float x, eps = 0.00001, cos, erro, aAnt, a;
    scanf ("%f", &x);
    cos = a = aAnt = erro = x;
    for (int i = 1; erro >= eps; i++){
        aAnt = -((a * x * x) / ((2 * i + 1) * (2 * i)));
        erro = a - aAnt;
        a = aAnt;
        if (erro < 0) erro = -erro;
        cos += aAnt;
    }
    printf ("%f", cos);
return 0;
}
