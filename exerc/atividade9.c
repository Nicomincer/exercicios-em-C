#include <stdio.h>

int main(void){
    int maior, menor, n, s; 
    int contagem = 0;
    int first = 0;
    while(contagem < 20){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(first==0){
            maior, menor = n;
            first += 1;
            contagem += 1;
        }
        else{
            if(n >= maior){
                maior = n;
                contagem += 1;
            }
            else if(n <= menor){
                menor = n;
                contagem += 1;
            }
            else{
                contagem += 1;
            }
        }
    }
    s = maior - menor;
    printf("A diferença do maior valor %d e o menor valor %d é %d", maior, menor, s);
    return 0;
}