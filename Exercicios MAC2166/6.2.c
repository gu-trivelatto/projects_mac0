#include <stdio.h>

int main () {
    int gabarito[30], aluno[30];
    gabarito[1] = 97; gabarito[2] = 97; gabarito[3] = 97; gabarito[4] = 97; gabarito[5] = 97; gabarito[6] = 97; gabarito[7] = 97; gabarito[8] = 97; gabarito[9] = 97; gabarito[10] = 97;
    gabarito[11] = 97; gabarito[12] = 97; gabarito[13] = 97; gabarito[14] = 97; gabarito[15] = 97; gabarito[16] = 97; gabarito[17] = 97; gabarito[18] = 97; gabarito[19] = 97; gabarito[20] = 97;
    gabarito[21] = 97; gabarito[22] = 97; gabarito[23] = 97; gabarito[24] = 97; gabarito[25] = 97; gabarito[26] = 97; gabarito[27] = 97; gabarito[28] = 97; gabarito[29] = 97; gabarito[30] = 97;
    int numero_de_alunos, acertos = 0;
    printf ("Quantos alunos?");
    scanf ("%d", &numero_de_alunos);
    for (int i = 1; i <= numero_de_alunos; i++) {
        printf ("Aluno %d", i);
        for (int n = 1; n <= 30; n++) {
            printf ("\nAlternativa: ");
            scanf ("%d", &aluno[i]);
            if (aluno[i] == gabarito[i]) {
                printf ("Acertou!");
                acertos++;
            }
            else printf ("Errou!");
        }
    printf ("A nota do aluno %d foi %d", i, acertos);
    acertos = 0;
    }
return 0;
}
