#include <stdio.h>

int main(void){
    int maior, n; 
    int contagem = 0;
    int first = 0;
    while(contagem < 10){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(first==0){
            maior = n;
            first += 1;
            contagem += 1;
        }
        else{
            if(n >= maior){
                maior = n;
                contagem += 1;
            }
            else{
                contagem += 1;
            }
        }
    }
    printf("O maior valor lido foi %d", maior);
    return 0;
}