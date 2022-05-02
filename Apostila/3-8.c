#include <stdio.h>
int main () {
    int n, aprovados = 0, reprovados = 0;
    float nota, media = 0, mediaGeral = 0;
    printf ("Quantos alunos? ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf ("\nAluno %d:", i);
        for (int N = 1; N <= 3; N++){
            printf ("\nNota %d: ", N);
            scanf ("%f", &nota);
            media += nota;
        }
        media /= 3;
        mediaGeral += media;
        if (media < 5) {
            printf ("\nO aluno %d foi reprovado e tem media %1.2f.\n", i, media);
            reprovados += 1;
        }
        else {
            printf ("\nO aluno %d foi aprovado e tem media %1.2f.\n", i, media);
            aprovados += 1;
        }
        media = 0;
    }
    mediaGeral /= n;
    printf ("\nA media da sala foi %1.2f e houveram %d reprovacoes e %d aprovacoes.\n", mediaGeral, reprovados, aprovados);
return 0;
}
