/***************************************************************/
/**                                                           **/
/**   Gustavo Trivelatto Gabriel       Número USP 11260908    **/
/**   Exercício-Programa 3                                    **/
/**   Professor: Alair Pereira do Lago                        **/
/**   Turma: 01                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MMAX 90
#define NMAX 90
#define PLAY 0
#define WIN 1
#define LOST 2

/*declaracao das funcoes*/
void tab (int m, int n, int tabul[291][291]);
char converte (int a);
void abre_zero (int m, int n, int tabul[291][291]);

/*funcao usada para imprimir o tabuleiro*/
void tab (int m, int n, int tabul[291][291]) {

    printf ("    ");
    for (int i = 1; i <= n; i++) {
        printf ("%3d", i);
    }
    printf ("\n   +--");
    for (int i = 1; i <= n; i++) {
        printf ("---");
    }
    printf ("+");
    /*a impressao do tabuleiro propriamente dito ocorre neste for, o resto serve para os "enfeites" do tabuleiro*/
    for (int i = 1; i <= m; i++) {
        printf ("\n%2d | ", i);
        for (int k = 1; k <= n; k++) {
            printf (" %c ", tabul[i][k]);
        }
        printf (" | %d", i);
    }
    printf ("\n   +--");
    for (int i = 1; i <= n; i++) {
        printf ("---");
    }
        printf ("+");
        printf ("\n    ");
    for (int i = 1; i <= n; i++) {
        printf ("%3d", i);
    }
}

/*funcao usada para conversao dos valores em int para char, para utilizacao na impressao do tabuleiro que acontece em char*/
char converte (int a) {
    char b;
    /*para 0 temos uma condicao a mais por conta do funcionamento da funcao abre_zero, que o transforma em char para nao haver loopings infinitos*/
    if (a == 0 || a == '0') b = '0';
    if (a == 1) b = '1';
    if (a == 2) b = '2';
    if (a == 3) b = '3';
    if (a == 4) b = '4';
    if (a == 5) b = '5';
    if (a == 6) b = '6';
    if (a == 7) b = '7';
    if (a == 8) b = '8';
    if (a == -1) b = '@';
return b;
}

/*funcao usada para abrir casas zeradas e os zeros ao redor*/
void abre_zero (int m, int n, int tabul[291][291]) {
    char valor;
    /*conversao da casa original em char para nao cair em looping infinito*/
    valor = converte(tabul[m + 200][n + 200]);
    tabul[m + 200][n + 200] = valor;
    tabul[m][n] = valor;
    /*cada if e igual, eles verificam se a casa e zero e se for repetem a funcao e convertem a casa em questao para char, evitando looping, isso e feito para todas casas ao redor dos zeros*/
    if (tabul[m + 200][n + 201] <= 8) {
        if (tabul[m + 200][n + 201] == 0) {
            abre_zero(m, n + 1, tabul);
        }
        valor = converte(tabul[m + 200][n + 201]);
        if (tabul[m + 200][n + 201] == '0' && valor != '0') valor = '0';
        tabul[m][n + 1] = valor;
    }
    if (tabul[m + 200][n + 199] <= 8) {
        if (tabul[m + 200][n + 199] == 0) {
            abre_zero(m, n - 1, tabul);
        }
        valor = converte(tabul[m + 200][n + 199]);
        if (tabul[m + 200][n + 199] == '0' && valor != '0') valor = '0';
        tabul[m][n - 1] = valor;
    }
    if (tabul[m + 201][n + 200] <= 8) {
        if (tabul[m + 201][n + 200] == 0) {
            abre_zero(m + 1, n, tabul);
        }
        valor = converte(tabul[m + 201][n + 200]);
        if (tabul[m + 201][n + 200] == '0' && valor != '0') valor = '0';
        tabul[m + 1][n] = valor;
    }
    if (tabul[m + 201][n + 201] <= 8) {
        if (tabul[m + 201][n + 201] == 0) {
            abre_zero(m + 1, n + 1, tabul);
        }
        valor = converte(tabul[m + 201][n + 201]);
        if (tabul[m + 201][n + 201] == '0' && valor != '0') valor = '0';
        tabul[m + 1][n + 1] = valor;
    }
    if (tabul[m + 201][n + 199] <= 8) {
        if (tabul[m + 201][n + 199] == 0) {
            abre_zero(m + 1, n - 1, tabul);
        }
        valor = converte(tabul[m + 201][n + 199]);
        if (tabul[m + 201][n + 199] == '0' && valor != '0') valor = '0';
        tabul[m + 1][n - 1] = valor;
    }
    if (tabul[m + 199][n + 201] <= 8) {
        if (tabul[m + 199][n + 201] == 0) {
            abre_zero(m - 1, n + 1, tabul);
        }
        valor = converte(tabul[m + 199][n + 201]);
        if (tabul[m + 199][n + 201] == '0' && valor != '0') valor = '0';
        tabul[m - 1][n + 1] = valor;
    }
    if (tabul[m + 199][n + 200] <= 8) {
        if (tabul[m + 199][n + 200] == 0) {
            abre_zero(m - 1, n, tabul);
        }
        valor = converte(tabul[m + 199][n + 200]);
        if (tabul[m + 199][n + 200] == '0' && valor != '0') valor = '0';
        tabul[m - 1][n] = valor;
    }
    if (tabul[m + 199][n + 199] <= 8) {
        if (tabul[m + 199][n + 199] == 0) {
            abre_zero(m - 1, n - 1, tabul);
        }
        valor = converte(tabul[m + 199][n + 199]);
        if (tabul[m + 199][n + 199] == '0' && valor != '0') valor = '0';
        tabul[m - 1][n - 1] = valor;
    }
}

int main () {
    int m, n, z, seed, numero, chute[2], iMina, jMina, tabuleiro[291][291], proximas = 0, condicao = PLAY, marcadas = 0, livres;
    char tipoChute, valor;
    /*definindo todas casas como 1 para evitar erros na funcao abre_zero*/
    for (int i = 0; i <= 290; i++) {
        for (int k = 0; k <= 290; k++) {
            tabuleiro[i][k] = 1;
        }
    }
    /*Inicio da definicao das variaveis do jogo*/
    printf ("Numero de linhas (3 <= m <= 90): ");
    scanf ("%d", &m);
    if (m < 3 || m > MMAX) {
        while (m < 3 || m > MMAX) {
            printf ("Valor invalido, insira outro valor para m: ");
            scanf ("%d", &m);
        }
    }
    printf ("\nNumero de colunas (3 <= n <= 90): ");
    scanf ("%d", &n);
    if (n < 3 || n > NMAX) {
        while (n < 3 || n > NMAX) {
            printf ("Valor invalido, insira outro valor para n: ");
            scanf ("%d", &n);
        }
    }
    printf ("\nNumero de minas (1 <= z <= %d): ", m * n - 1);
    scanf ("%d", &z);
    if (z < 1 || z > (m * n - 1) ) {
        while (z < 1 || z > (m * n - 1) ) {
            printf ("Valor invalido, insira outro valor para z: ");
            scanf ("%d", &z);
        }
    }
    printf ("\nSemente (1 <= s <= 12345): ");
    scanf ("%d", &seed);
    if (seed < 1 || seed > 12345) {
        while (seed < 1 || seed > 12345) {
            printf ("Valor invalido, insira outro valor para a semente: ");
            scanf ("%d", &seed);
        }
    }
    srand(seed);
    /*fim da definicao das variaveis do jogo*/
    printf ("\nBem vindo ao Caca-Minas!\n");
    /*definicao da localizacao das minas*/
    for (int i = 1; i <= z; i++) {
        numero = rand();
        iMina = numero % m + 1;
        jMina = (numero / m) % n + 1;
        if (tabuleiro[iMina + 200][jMina + 200] != -1) {
            tabuleiro[iMina + 200][jMina + 200] = -1;
        }
        else {
            i--;
        }

    }
    /*definindo o numero de casas livres*/
    livres = m * n;
    /*inicio da construcao do tabuleiro*/
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            /*definindo o tabuleiro da "interface" com todas casas fechadas (contendo . )*/
            tabuleiro[i][k] = '.';
            /*definindo o tabuleiro "marcado" com todas casas marcadas (contendo * )*/
            tabuleiro[i + 100][k + 100] = '*';
        }
    }
    printf ("    ");
    for (int i = 1; i <= n; i++) {
        printf ("%3d", i);
    }
    printf ("\n   +--");
    for (int i = 1; i <= n; i++) {
        printf ("---");
    }
    printf ("+");
    /*impressao do tabuleiro fechado*/
    for (int i = 1; i <= m; i++) {
        printf ("\n%2d | ", i);
        for (int k = 1; k <= n; k++) {
            printf (" %c ", tabuleiro[i][k]);
        }
        printf (" | %d", i);
    }
    printf ("\n   +--");
    for (int i = 1; i <= n; i++) {
        printf ("---");
    }
        printf ("+");
        printf ("\n    ");
    for (int i = 1; i <= n; i++) {
        printf ("%3d", i);
    }
    /*definicao do numero de minas proximas de cada casa, tendo um if para cada tipo de posicao (cantos e centro)*/
    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            /*primeira linha*/
            if (i == 1) {
                /*canto superior esquerdo*/
                if (k == 1) {
                    if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                    if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                    if (tabuleiro[i + 201][k + 201] == -1) proximas++;
                    if (tabuleiro[i + 200][k + 200] != -1) {
                        tabuleiro[i + 200][k + 200] = proximas;
                    }
                    proximas = 0;
                }
                /*primeira linha*/
                else {
                    /*canto superior direito*/
                    if (k == n) {
                        if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                        if (tabuleiro[i + 201][k + 199] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                        proximas = 0;
                    }
                    /*primeira linha central*/
                    else {
                        if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                        if (tabuleiro[i + 201][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 201][k + 199] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                        proximas = 0;
                    }
                }
            }
            /*abaixo da primeira linha*/
            else {
                /*ultima linha*/
                if (i == m) {
                    /*canto inferior esquerdo*/
                    if (k == 1) {
                        if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 199][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                        proximas = 0;
                    }
                    /*ultima linha*/
                    else {
                        /*canto inferior direito*/
                        if (k == n) {
                            if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                            proximas = 0;
                        }
                        /*ultima linha central*/
                        else {
                            if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 201] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                            proximas = 0;
                        }
                    }
                }
                /*diferente da primeira e da ultima linha*/
                else {
                    /*boda esquerda*/
                    if (k == 1) {
                        if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                        if (tabuleiro[i + 199][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                        if (tabuleiro[i + 201][k + 201] == -1) proximas++;
                        if (tabuleiro[i + 200][k + 200] != -1) {
                            tabuleiro[i + 200][k + 200] = proximas;
                        }
                        proximas = 0;
                    }
                    else {
                        /*borda direita*/
                        if (k == n) {
                            if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 201][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 200] != -1) {
                                tabuleiro[i + 200][k + 200] = proximas;
                            }
                            proximas = 0;
                        }
                        /*centro do tabuleiro*/
                        else {
                            if (tabuleiro[i + 199][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 201] == -1) proximas++;
                            if (tabuleiro[i + 199][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 201] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 201][k + 200] == -1) proximas++;
                            if (tabuleiro[i + 201][k + 201] == -1) proximas++;
                            if (tabuleiro[i + 201][k + 199] == -1) proximas++;
                            if (tabuleiro[i + 200][k + 200] != -1) {
                                tabuleiro[i + 200][k + 200] = proximas;
                            }
                            proximas = 0;
                        }
                    }
                }
            }
        }
    }
    /*fim da construcao do tabuleiro*/
    /*inicio do jogo*/
    while (condicao == PLAY) {
        /*entrada do chute do jogador*/
        printf ("\n\nProximo chute: ");
        scanf (" %c %d %d", &tipoChute, &chute[1], &chute[2]);
        /*definicoes do chute para abrir*/
        if (tipoChute == 'a' || tipoChute == 'A') {
            if (tabuleiro[chute[1]][chute[2]] != '.' && tabuleiro[chute[1]][chute[2]] != '*') printf ("\nSem efeito.");
            else {
                /*condicao para derrota*/
                if (tabuleiro[chute[1] + 200][chute[2] + 200] == -1) condicao = LOST;
                else {
                    /*condicao se o chute for em um 0*/
                    if (tabuleiro[chute[1] + 200][chute[2] + 200] == 0) {
                        abre_zero(chute[1], chute[2], tabuleiro);
                        livres = 0;
                        /*recontagem das casas livres pois nao valeria a pena incluir na funcao abre_zero*/
                        for (int i = 1; i <= m; i++) {
                            for (int k = 1; k <= n; k++) {
                                if (tabuleiro[i][k] == '.') livres++;
                            }
                        }
                        printf ("Por enquanto %d/%d marcadas e %d livres.\n", marcadas, z, livres);
                        tab(m, n, tabuleiro);
                        /*condicao para vitoria de acordo com o PDF do EP*/
                        if (livres == 0) condicao = WIN;
                    }
                    /*abrir a casa caso nao seja nem um mina nem 0*/
                    else {
                        livres--;
                        valor = converte(tabuleiro[chute[1] + 200][chute[2] + 200]);
                        tabuleiro[chute[1]][chute[2]] = valor;
                        printf ("Por enquanto %d/%d marcadas e %d livres.\n", marcadas, z, livres);
                        tab(m, n, tabuleiro);
                        if (livres == 0) condicao = WIN;
                    }


                }
            }
        }
        /*marcacao de casas*/
        if (tipoChute == 'm' || tipoChute == 'M') {
                if (tabuleiro[chute[1]][chute[2]] == '.') {
                    if (marcadas < z) {
                        marcadas++;
                        livres--;
                        /*puxa o valor da parte da matriz "marcada"*/
                        tabuleiro[chute[1]][chute[2]] = tabuleiro[chute[1] + 100][chute[2] + 100];
                        printf ("Por enquanto %d/%d marcadas e %d livres.\n", marcadas, z, livres);
                        tab (m, n, tabuleiro);
                        if (livres == 0) condicao = WIN;
                    }
                    else printf ("Sem efeito.");

                }
                else printf ("Sem efeito.");

        }
        /*desmarcacao de casas*/
        if (tipoChute == 'd' || tipoChute == 'D') {
                if (tabuleiro[chute[1]][chute[2]] == '*') {
                    marcadas--;
                    livres++;
                    tabuleiro[chute[1]][chute[2]] = '.';
                    printf ("Por enquanto %d/%d marcadas e %d livres.\n", marcadas, z, livres);
                    tab (m, n, tabuleiro);

                }
                else printf ("Sem efeito.");
        }
    }
    /*fim do jogo (encerramento do loop pela mudanca da condicao do jogo)*/
    /*vitoria*/
    if (condicao == WIN) {
        printf ("\n");
        printf ("\n\nParabens! Voce ganhou!\n");
        /*transforma as casas marcadas com * em @ para a exibicao*/
        for (int i = 1; i <= m; i++) {
            for (int k = 1; k <= n; k++) {
                if (tabuleiro[i][k] == '*') tabuleiro[i][k] = '@';
            }
        }
        /*imprime o tabuleiro aberto*/
        tab(m, n, tabuleiro);
    }
    /*derrota*/
    if (condicao == LOST) {
        /*da a mensagem de derrota e abre todo o tabuleiro*/
        printf ("BOOOOM! Voce acaba de pisar numa mina!\n");
            for (int i = 1; i <= m; i++) {
                for (int k = 1; k <= n; k++) {
                    valor = converte(tabuleiro[i + 200][k + 200]);
                    tabuleiro[i][k] = valor;
                }
            }
        tab(m, n, tabuleiro);
    }
return 0;
}
