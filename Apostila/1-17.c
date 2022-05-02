#include<stdio.h>
int main(){
    int dec, bin = 0, pot = 1, p;
    printf("Decimal: ");
    scanf("%d", &dec);
    for(p = 0; pot < dec; p++){
        pot = pot * 2;
    }
    pot = pot / 2;
    for(pot ; pot > 0; pot = pot / 2){
        if(dec - pot >= 0){
            bin = (bin * 10) + 1;
            dec = dec - pot;
        }
        else bin = bin * 10;
    }
    printf("Binario: %d", bin);
}
