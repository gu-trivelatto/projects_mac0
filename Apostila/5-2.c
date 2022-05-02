#include <stdio.h>
#define TRUE 1
#define FALSE 0

int bissexto (int ano);
int data (int dia, int mes, int ano);

int bissexto (int ano) {
    int bis = FALSE;
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) bis = TRUE;
return bis;
}

int proxDia (int dia, int mes, int ano) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia == 31) dia = 1;
        else dia += 1;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia == 30) dia = 1;
        else dia += 1;
    }
    if (mes == 2) {
        ano = bissexto (ano);
        if (ano == TRUE) {
            if (dia == 29) dia = 1;
            else dia += 1;
        }
        else {
            if (dia == 28) dia = 1;
            else dia += 1;
        }
    }
return dia;
}

int main () {
    int dia, proxdia, mes, proxmes, ano, n;
    printf ("Numero de datas: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf ("\nData %d\n", i);
        scanf ("%d %d %d", &dia, &mes, &ano);
        proxdia = proxDia (dia, mes, ano);
        if (proxdia < dia) proxmes = mes + 1;
        else proxmes = mes;
        if (proxmes > 12) {
            ano += 1;
            proxmes = 1;
        }
        printf ("\nA data do proximo dia e %d/%d/%d\n", proxdia, proxmes, ano);
    }
return 0;
}
