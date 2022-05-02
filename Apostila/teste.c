#include<stdio.h>
int main () {
    float r, rant, x, erro, eps;
    printf ("Entre com x >= 0: " );
    scanf ("%f", &x );
    r = x; eps = 0.0001; erro = eps; rant = r;
    while ( erro >= eps && x > 0) {
        r = (rant + x / rant) / 2;
        erro = r - rant;
        if ( erro < 0)
        erro = -erro;
        rant = r;
    }
    if(x == 0) r = x;
    printf ("Raiz de %1.2f = %1.3f\n" , x , r );
return 0;
}
