#include<stdio.h>
int main(){
    int n, num, soma = 0, teste = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        for(int d = 2; d <= num && teste == 0; d++){
            if(num % d == 0 && d != num) teste = 1;
        }
        if(teste == 0) soma = soma + num;
        teste = 0;
    }
    printf("Soma: %d", soma);
return 0;
}
