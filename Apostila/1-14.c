#include<stdio.h>
int main(){
    int n, fib1 = 1, fib2 = 1, fib3;
    scanf("%d", &n);
    for(int i = 3; i <= n; i++){
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    printf("%d", fib3);
return 0;
}
