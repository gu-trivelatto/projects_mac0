#include <stdio.h>

int main () {
    int n, k, peso[10], pond = 0;
    float nota[10], aluno[40], media = 0;
    printf ("Quantos alunos?");
    scanf ("%d", &n);
    printf ("\nQuantas provas?");
    scanf ("%d", &k);
    printf ("\nPeso das provas:");
    for (int i = 1; i <= k; i++) {
        printf ("\nProva %d: ", i);
        scanf ("%d", &peso[i]);
        pond += peso[i];
    }
    for (int i = 1; i <= n; i++) {
        printf ("\nNotas do aluno %d:\n", i);
        aluno[i] = 0;
        for (int c = 1; c <= k; c++) {
            scanf ("%d", &nota[c]);
            nota[c] = nota[c] * peso[c];
            aluno[i] += nota[c];
        }
        aluno[i] /= pond;
        printf ("\nA media ponderada do aluno %d e %d", i, aluno[i]);
    }
    for (int i = 1; i <= n; i++) {
        media = media + aluno[i];
    }
    media /= n;
    printf ("A media da sala foi ", media);
return 0;
}
