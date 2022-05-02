#include<stdio.h>
int main(){
    int a, b, c;
    for(int i = 1000; i <= 9999; i++){
        a = i / 100;
        b = i % 100;
        c = a + b;
        if(c * c == i){
            printf("%d ", i);
        }
    }
return 0;
}
