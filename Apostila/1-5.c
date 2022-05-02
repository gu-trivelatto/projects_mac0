#include<stdio.h>
int main(){
    int vendas, dia, maior_venda, maior_dia;
    maior_venda = 0;
    maior_dia = 0;
    for(dia = 1; dia <= 31; dia++){
        printf("\n%d de marco\nCDs vendidos:", dia);
        scanf("%d", &vendas);
        if(vendas > maior_venda){
            maior_venda = vendas;
            maior_dia = dia;
        }
    }
    printf("O maior numero de vendas foi no dia %d, com %d CDs vendidos.", maior_dia, maior_venda);
return 0;
}
