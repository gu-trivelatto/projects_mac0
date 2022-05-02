#include <stdio.h>

/*criacao dos prototipos das funcoes*/
double raizCubica (double n);
int chao (double x);
double novaCaixa (double caixa);

/*funcao raiz definida como variavel double, para maior precisao*/
double raizCubica (double n) {
    double raiz = 0, ant = n, erro = n;
    if (n > 0) {
        while (erro >= 1e-8) {
            raiz = ((2 * ant ) / 3) + (n / (ant * ant * 3));
            erro = raiz - ant;
            ant = raiz;
            if (erro < 0) erro = -erro;
        }
    }
return raiz;
}

/*funcao chao*/
int chao (double x) {
    int inteiro;
    inteiro = (int)x;
return inteiro;
}

/*funcao nova caixa*/
double novaCaixa (double c) {
    double rifa;
    double caixa;
    rifa = (9821.0 * raizCubica (c)) + 0.211327;
    caixa = rifa - chao (rifa);
return caixa;
}

/*funcao principal*/
int main () {
    double caixa;       /*definicao da variavel caixa em double para maior precisao*/
    float seed, pontosJogador = 0, pontosMesa = 0;      /*definicao das variaveis de pontuacao e da seed como float para otimizacao*/
    int derrotas = 0, ast, carta, cartasJogador = 0, cartasMesa = 0;        /*variaveis para contadores e para a carta atual*/
    printf ("Forneca uma semente: ");       /*definicao da semente*/
    scanf ("%f", &seed);
    caixa = seed / 100000;
    for (double teto = 0.5; teto <= 7.5; teto += 0.5) {     /*inicio do loop de tetos - apos cada sequencia de 10000 jogos o teto aumenta e recomeca os jogos*/
        printf ("%1.1f ", teto);
        for (int n = 1; n <= 10000; n++) {      /*inicio do loop de jogos - sorteia novas cartas para 10000 jogos realizando a contagem de pontos e cartas*/
            while (pontosJogador < teto) {
                carta = chao ((caixa * 10) + 1);
                if (carta == 8 || carta == 9 || carta == 10) {      /*definicao da pontuacao das cartas dama, valete e rei*/
                    pontosJogador += 0.5;
                    cartasJogador++;
                }
                else {
                    pontosJogador += carta;
                    cartasJogador++;
                }
                caixa = novaCaixa (caixa);
            }
            if (pontosJogador <= 7.5) {     /*condicoes de derrota para a mesa - a mesa so joga se o jogador nao estiver estourado*/
                while (pontosMesa < pontosJogador || (pontosMesa == pontosJogador && cartasJogador < cartasMesa)) {     /*a mesa joga enquanto tiver menos pontos que o jogador ou se estiverem empatados e o jogador tiver menos cartas*/
                    carta = chao ((caixa * 10) + 1);
                    if (carta == 8 || carta == 9 || carta == 10) {      /*definicao da pontuacao das cartas dama, valete e rei*/
                        pontosMesa += 0.5;
                        cartasMesa++;
                    }
                    else {
                        pontosMesa += carta;
                        cartasMesa++;
                    }
                    caixa = novaCaixa (caixa);
                    if (pontosMesa > 7.5) {     /*definicao da derrota*/
                        derrotas++;
                    }
                }
            }
            if (n == 10000) {       /*contagem de asteriscos - comeca apenas ao atingit o jogo de numero 10000*/
                printf (" %d ", derrotas);
                ast = chao ((100.0 * ((double)derrotas / (double)n)) + 0.5);
                derrotas = 0;       /*reset da variavel derrotas para iniciar os jogos do proximo teto*/
                for (int i = 1; i <= ast; i++) {
                    printf ("*");
                }
            }
            pontosJogador = pontosMesa = cartasJogador = cartasMesa = 0;        /*reset das pontuacoes e das cartas para o proximo jogo*/
        }
    printf ("\n");
    }
return 0;
}
