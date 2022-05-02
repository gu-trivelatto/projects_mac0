#include <stdio.h>

void converte (char ch, int *tipo, char *valor);

void converte (char ch, int *tipo, char *valor) {
    *tipo = 2;
    if (ch >= 48 && ch <= 57) {
        *tipo = 0;
        *valor = ch;
    }
    if (ch >= 65 && ch <= 90) {
        *tipo = 1;
        *valor = ch;
    }
    if (ch >= 97 || ch <= 122) {
        *tipo = 1;
        *valor = ch - 32;
    }
}

int main () {
    int n, tipo;
    char ch, valor;
    scanf ("%d", &n);
    while (n > 0) {
        scanf ("%c", &ch);
        printf ("%d  ", ch);
        converte (ch, &tipo, &valor);
        if (tipo != 2) {
            printf ("%d   %d ", ch, valor);
        }
        else printf ("Formato invalido");
        n--;
    }
return 0;
}
