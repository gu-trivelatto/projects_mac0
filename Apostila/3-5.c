#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int main () {
    float a, b, c, raiz1, raiz2, delta, deltaNeg = FALSE, b1, b2, delta1, delta2;
    scanf ("%f %f %f", &a, &b, &c);
    delta = (b * b) - (4 * (a * c));
    if (delta >= 0) delta = sqrt(delta);
    else {
        delta = sqrt(-delta);
        deltaNeg = TRUE;
    }
    if (deltaNeg == FALSE){
        raiz1 = (-b + delta)/(2 * a);
        raiz2 = (-b - delta)/(2 * a);

        if (raiz1 == raiz2) printf ("A raiz e dupla e e %1.2f", raiz1);
        else printf ("As raizes sao %1.2f e %1.2f", raiz1, raiz2);
    }
    else{
        b1 = (-b) / (2 * a);
        delta1 = delta / (2 * a);

        b2 = (-b) / (2 * a);
        delta2 = -delta / (2 * a);

        if (b1 == b2 && delta1 == delta2) printf ("A raiz e dupla e e %1.2f + %1.2fi", b1, delta1);
        else printf ("As raizes sao %1.2f + %1.2fi e %1.2f + %1.2fi", b1, delta1, b2, delta2);
    }

return 0;
}
