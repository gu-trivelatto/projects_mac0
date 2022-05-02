#include<stdio.h>
int main(){
    int n, cata, catb;
    scanf("%d", &n);
    for(n; n >= 1; n--){
        for(cata = 1; cata < n; cata++){
            for(catb = 1; catb < cata; catb++){
                if((cata * cata) + (catb * catb) == (n * n)) printf("%d e hipotenusa de catetos %d e %d\n", n, cata, catb);
            }
        }
    }
return 0;
}
