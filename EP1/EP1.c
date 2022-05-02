/***************************************************************/
/**                                                           **/
/**   Gustavo Trivelatto Gabriel       Número USP: 11260908   **/
/**   Exercício-Programa 1                                    **/
/**   Professor: Alair                                        **/
/**   Turma: 01                                               **/
/**                                                           **/
/***************************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main (){  /* criação de variaveis para o numero de digitos, cores, palpites, tentativas e acertos */
    int digitos, cores, senha, senhaProx, s, palpite, palpiteProx, p, palpiteCont, palpiteMax, acertos, tentativas, i, contador, teste;
    senhaProx = 0;  /* variavel definida para receber o proximo valor da senha ao realizar as comparacoes do loop */
    palpiteCont = 0; /* variavel definida para receber o proximo valor do palpite ao realizar as comparacoes do loop */
    acertos = 0;
    tentativas = 0;
    s = 0;  /* variavel usada para comparar o ultimo digito da senha com o ultimo do palpite */
    p = 0;  /* variavel usada para comparar o ultimo digido do palpite com o ultimo da senha */
    teste = 0;  /* variavel usada para definir o resultado do jogo: 0 = novo palpite/repetir o loop; 1 = vitória do jogador; 2 = derrota do jogador; */
    printf ("Digite o numero de digitos da senha:");  /* etapa de inserção de dados */
    scanf ("%d", &digitos);
    printf ("Digite o numero de cores da senha:");
    scanf ("%d", &cores);
    printf ("Digite o numero maximo de palpites:");
    scanf ("%d", &palpiteMax);
    printf ("Digite a senha de %d digitos (0 para aleatorio):", digitos);
    scanf ("%d", &senha);
    if (senha == 0) {    /* codigo obtido no PDF do EP1 para senha aleatoria */
        srand (time (NULL) );
        for (i = 0; i < digitos; i++)
            senha = senha*10 + (rand() % cores + 1);
    }
    for (palpiteCont = 1; palpiteCont <= palpiteMax && teste == 0; ++palpiteCont) {  /* criacao de um loop com contagem de tentativas */
        printf ("Digite um palpite:");
        scanf ("%d", &palpite);
        palpiteProx = palpite;  /* definicao das variaveis para senha e palpite que serao "desmontadas" no proximo loop */
        senhaProx = senha;
        tentativas = tentativas  + 1;  /* aumento no valor de tentativas que sera mostrado caso o usuario acerte a senha */
        for (contador = digitos; contador > 0; --contador) {  /* inicio do loop para verificar o palpite, o contador representa quantas vezes o loop se repetira, ou seja, o mesmo numero de digitos da senha */
            p = palpiteProx % 10;  /* separacao do ultimo digito da senha e do palpite para comparacao */
            s = senhaProx % 10;
            palpiteProx = palpiteProx/10;  /* criacao dos proximos valores para senha e palpite, no caso, sera dividido por 10 para remover o ultimo digito ja comparado */
            senhaProx = senhaProx/10;
            if (p == s){    /* aumento do numero de acertos caso p e s sejam iguais */
                acertos = acertos + 1;
            }
        }
        printf ("Pinos pretos: %d \n", acertos);   /* informe ao usuario o numero de acertos logo apos seu palpite */
        if (acertos == digitos) {  /* a deefinicao da vitoria, teste = 1, ocorre caso o numero de acertos seja igual ao numero de digitos da senha */
            teste = 1;
        }
        if (tentativas == palpiteMax && acertos != digitos) {  /* caso o numero de tentativas atinja o maximo de palpites e o numero de acertos ainda seja diferente do numero de digitos da senha, se define a derrota, teste = 2 */
            teste = 2;
        }
        acertos = 0;  /* reset do numero de acertos caso o loop se reinicie */
    }
    if (teste == 1) {     /* definicao das mensagens de vitoria e derrota, mostrando tambem o numero de tentativas caso o jogador ganhe e a senha caso ele perca */
        printf ("Voce achou a senha em %d tentativas!", tentativas);
    }
    else {
        printf ("Voce nao achou a senha. A resposta era %d.", senha);
    }
    return 0;
}
