#include <stdio.h>

int main () {
    int conta;
    float a, b, res;
    while (1){
        printf ("\nEntre com dois numeros e um sinal (+ = 1, - = 2, * = 3, / = 4)");
        printf("\n Sinal: ");
        scanf ("%d", &conta);
        scanf ("%f", &a);
        scanf ("%f", &b);
        if (conta == 1) res = a + b;
        if (conta == 2) res = a - b;
        if (conta == 3) res = a * b;
        if (conta == 4) res = a / b;
        printf ("Resultado = %1.2f", res);
    }
return 0;
}
