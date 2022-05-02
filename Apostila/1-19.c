#include<stdio.h>
int main(){
    int a, b, c, A, B, C;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        A = a;
        if(b > c){
            B = b;
            C = c;
        }
        else{
            B = c;
            C = b;
        }
    }
    if(b > a && b > c){
        A = b;
        if(a > c){
            B = a;
            C = c;
        }
        else{
            B = c;
            C = a;
        }
    }
    if(c > b && c > a){
        A = c;
        if(b > a){
            B = b;
            C = a;
        }
        else{
            B = a;
            C = b;
        }
    }
    printf("%d > %d > %d", A, B, C);
return 0;
}
