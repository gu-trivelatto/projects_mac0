#include<stdio.h>
int main(){
    int n, num1, num2, cres = 1, cresMax = 1;
    scanf("%d", &n);
    scanf("%d", &num1);
    for(int i = 1; i < n; i++){
        scanf("%d", &num2);
        if(num2 > num1){
            cres = cres + 1;
            if(cres > cresMax) cresMax = cres;
        }
        else {
            if(cres > cresMax) cresMax = cres;
            cres = 1;
        }
        num1 = num2;
    }
    printf("Maximo crescente: %d", cresMax);
return 0;
}
