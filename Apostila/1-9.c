#include<stdio.h>
int main(){
    int n, i, j, teste = 0, numTeste = 0;
    scanf("%d", &n);
    scanf("%d", &i);
    scanf("%d", &j);
    for(int t = 1; t <= n; t++){
        while(teste != 1){
            if(numTeste % i == 0 || numTeste % j == 0){
                printf("%d", numTeste);
                teste = 1;
                numTeste++;
            }
            else numTeste++;
        }
        teste = 0;
    }
return 0;
}
