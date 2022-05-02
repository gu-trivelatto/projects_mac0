#include<stdio.h>
int main () {
    float x, z, jurosMes;
    int mes = 1;
    printf ("Insira o valor inicial: ");
    scanf ("%f", &x);
    printf ("\nInsira a taxa de juros: ");
    scanf ("%f", &z);
    for (mes; mes <= 12; mes++) {
        jurosMes = x + (x * z);
        x = jurosMes;
        printf("\nO valor ao final do mes %d foi %1.2f bonoros.", mes, jurosMes);
    }
return 0;
}
