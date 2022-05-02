#include<stdio.h>
int main(){
    int n, teste = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n / 2 && teste == 0; i++){
        if(i * (i + 1) * (i + 2) == n){
            printf("E triangular de %d, %d e %d", i, i + 1, i + 2);
            teste = 1;
        }
    }
    if(teste == 0) printf("Nao e triangular");
return 0;
}
