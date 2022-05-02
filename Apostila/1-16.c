#include<stdio.h>
int main(){
    int bin, dec = 0, resto, pot = 1;
    printf("Binario: ");
    scanf("%d", &bin);
    for(int i = 0; bin != 0; i++){
        resto = bin % 10;
        bin = bin / 10;
        for(int p = 0; p < i; p++){
            pot = pot * 2;
        }
        dec = dec + (resto * pot);
        pot = 1;
    }
    printf("\nDecimal: %d", dec);
return 0;
}
