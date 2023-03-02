#include <stdio.h>

int main()
{
    float n1, n2, media;
    printf("Digite sua n1:");
    scanf("%f", &n1);
    printf("Digite sua n2:");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    if(media>=5){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
    return 0;
}