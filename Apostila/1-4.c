#include<stdio.h>
int main(){
    int x, n, pot, i;
    i = 1;
    scanf("%d", &x);
    scanf("%d", &n);
    pot = x;
    while(i < n){
        pot = pot * x;
        i = i + 1;
    }
    printf("%d", pot);
return 0;
}
