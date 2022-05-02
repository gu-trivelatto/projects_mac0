#include<stdio.h>
int main(){
    int p, teste = 0;
    scanf("%d", &p);
    for(int i = 2; i <= p && teste != 1; i++){
        if(p % i == 0 && p != i){
            printf("O numero  nao e primo");
            teste = 1;
        }
    }
    if(teste == 0){
        printf("O numero e primo");
    }
return 0;
}
