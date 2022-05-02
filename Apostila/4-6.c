#include <stdio.h>
float arctan (float x) {
    float eps = 0.0001, arctan , a, bErro, b, x2, y = 1;
    bErro = a = arctan = x;
    x2 = x * x;
    for (int i = 1; bErro >= eps; i++) {
        y = -y;
        a = x2 * a;
        b = y * (a / (2 * i + 1));
        bErro = b;
        if (bErro < 0) bErro = -bErro;
        arctan += b;
    }
return arctan;
}
float angulo (float x, float y) {
    float ang;
    if (y < x) {
        ang = arctan (y / x);
    }
    else {
        ang = (3.14 / 2) - arctan (x / y);
    }
    ang = 180 / (3.14 / ang);
return ang;
}
int main () {
    float x, y, angMin = 90, ang, xMenor, yMenor;
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf ("%f %f", &x, &y);
        ang = angulo (x, y);
        if (ang < angMin) {
            angMin = ang;
            xMenor = x;
            yMenor = y;
        }
    }
    ang = angulo (x, y);
    printf ("\nO ponto (%1.2f, %1.2f) forma o menor angulo, %1.0f graus.", xMenor, yMenor, angMin);
return 0;
}
