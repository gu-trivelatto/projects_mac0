#include <stdio.h>
int main () {
    int popUaua, popNY, ano;
    float taxaUaua, taxaNY;
    printf ("Populacao de Uaua: ");
    scanf ("%d", &popUaua);
    printf ("Populacao de NY: ");
    scanf ("%d", &popNY);
    printf ("Taxa de crescimento de Uaua: ");
    scanf ("%f", &taxaUaua);
    printf ("Taxa de crescimento de NY: ");
    scanf ("%f", &taxaNY);
    if(popUaua > popNY) {
        if (taxaUaua >= taxaNY) printf ("A populacao da cidade menor nao passa a da cidade maior.");
        else {
            for (ano = 1; popNY < popUaua; ano++) {
                popUaua = (float)popUaua * ((float)1 + taxaUaua);
                popNY = (float)popNY * ((float)1 + taxaNY);
            }
            printf ("A populacao da cidade menor ficara maior que a da cidade maior em %d anos.", ano);
        }
    }
    if(popUaua < popNY) {
        if (taxaUaua <= taxaNY) printf ("A populacao da cidade menor nao passa a da cidade maior.");
        else {
            for (ano = 1; popNY > popUaua; ano++) {
                popUaua = (float)popUaua * ((float)1 + taxaUaua);
                popNY = (float)popNY * ((float)1 + taxaNY);
            }
            printf ("A populacao da cidade menor ficara maior que a da cidade maior em %d anos.", ano);
        }
    }
return 0;
}
