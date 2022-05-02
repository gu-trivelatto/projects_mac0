#include<stdio.h>
int main(){
    int n, num1, num2, seq = 1;
    scanf("%d", &n);
    scanf("%d", &num1);
    for(int i = 1; i < n; i++){
        scanf("%d", &num2);
        if(num1 != num2) seq = seq + 1;
        num1 = num2;
    }
    printf("\nHa %d sequencias de numeros iguais", seq);
return 0;
}
