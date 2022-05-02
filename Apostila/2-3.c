#include<stdio.h>
int main(){
    int n, m, x, y, soma, somaMax = 0, xMax, yMax;
    scanf("%d %d", &n, &m);
    for(x = 0; x <= n; x++){
        for(y = 0; y <= m; y++){
            soma = (x * y) - (x * x) + y;
            if(soma > somaMax){
                somaMax = soma;
                xMax = x;
                yMax = y;
            }
        }
    }
    printf("A maior soma e %d, resultante de (%d, %d)", somaMax, xMax, yMax);
return 0;
}
