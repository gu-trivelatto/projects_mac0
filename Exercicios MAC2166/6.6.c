#include <stdio.h>

int main () {
    char frase[200], palavra[20];
    int repete = 0, carac, atual, ponto;
    for (int i = 1; i <= 200; i++) {
        scanf ("%c", &frase[i]);
        if (frase[i] == 46) i = 201;
    }
    printf ("Palavra");
    scanf ("%d", &carac);
    for (int i = 1; i <= carac; i++) {
        scanf ("%c", &palavra[i]);
    }
    for (int i = 1; i <= 200; i++) {
        if (frase[i] == palavra[1]) {
            atual = i;
            for (int k = 2; k <= carac; k++) {
                atual++;
                if (frase[atual] != palavra[k]) k = 21;
                else {
                    if (k == carac) repete++;
                }
            }
        }
    }
    printf ("A palavra se repete %d vezes.", repete);
return 0;
}
