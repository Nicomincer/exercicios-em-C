#include <stdio.h>

int main(void){
    int n = 1;
    int contagem = 1;
    while(contagem <= 25){
        printf("%d\n", n);
        n = n + 2;
        contagem += 1;
    }
    return 0;
}