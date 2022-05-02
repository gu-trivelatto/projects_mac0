#include<stdio.h>
int main(){
    int n, prox, fat;
    scanf("%d", &n);
    prox = n;
    fat = n;
    while(n > 1){
        prox = prox - 1;
        fat = fat * prox;
        n = n - 1;
    }
    printf("%d", fat);
return 0;
}
