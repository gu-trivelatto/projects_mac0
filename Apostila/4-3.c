#include <stdio.h>
int bloco (int n) {
    int num, teste;
    scanf ("%d", &num);
    if (num % 2 == 0) teste = 1;
    else teste = -1;
    for (int i = 2; i <= n; i++) {
        scanf ("%d", &num);
        if (num % 2 == 0) {
            if (teste != 1) teste == 0;
        }
        else {
            if (teste != -1) teste == 0;
        }
    }
return teste;
}
int main () {
    int n, N, num, alt, m, teste = 1;
    scanf ("%d", &n);
    N = n;
    for (int menos = 1; N > 0; menos++){
        N -= menos;
    }
    if (N == 0) {
        scanf ("%d", &num);
        n--;
        if (num % 2 == 0) {
            alt = 1;
            for (int i = 2; n > 0; i++) {
                alt = -alt;
                if (bloco (i) != alt) teste = 0;
                n -= i;
                m = i;
            }
        }
        else {
            alt = -1;
            for (int i = 2; n > 0; i++) {
                alt = -alt;
                if (bloco (i) != alt) teste = 0;
                n -= i;
                m = i;
            }
        }
    }
    else {
        printf ("Nao e piramidal.");
        teste = 2;
    }
    if (teste == 1) printf ("A sequencia e piramidal %d-alternante.", m);
    if (teste == 0) printf ("Nao e piramidal.");
return 0;
}
/*int bloco (int n) {
    int num, teste, teste1, teste2;
    scanf ("%d", &num);
    if (num % 2 == 0) teste1 = 0;
    else teste1 = 1;
    for (int i = 1; i < n; i++) {
        scanf ("%d", &num);
        if (num % 2 == 0) teste2 = 0;
        else teste2 = 1;
        if (teste1 == teste2) teste = teste1;
        else teste = -1;
    }
return teste;
}
int main () {
    int n, N, num, alt, m, x = 1, blo;
    scanf ("%d", &n);
    N = n;
    while (N > 0) {
        N = N - x;
        if (N >= 0) alt = 1;
        else alt = 0;
        x++;
    }
    if (alt == 1) {
        for (m = 1; m <= x; m++) {
            for (int i = 1; i <= m; i++) {
                blo = bloco (i);

            }
        }

    }

}*/

