#include<stdio.h>
int main(){
    int a, b, c, hip, cata, catb, potH, potA, potB;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        hip = a;
        cata = b;
        catb = c;
    }
    if(c > b && c > a){
        hip = c;
        cata = b;
        catb = a;
    }
    if(b > a && b > c){
        hip = b;
        cata = a;
        catb = c;
    }
    potH = hip * hip;
    potA = cata * cata;
    potB = catb * catb;
    if(potH == potA + potB){
        printf("E retangulo");
    }
    else printf("Nao e retangulo");
return 0;
}

