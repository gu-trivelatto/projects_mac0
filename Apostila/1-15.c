#include<stdio.h>
int main(){
    int m, j, resto;
    scanf("%d %d", &j, &m);
    resto = j % m;
    for(int i = 1; i < j; i++){
        if(i % m == resto){
            printf("%d ", i);
        }
    }
return 0;
}
