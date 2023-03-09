#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c, delta, s1, s2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4*a*c;
    if(a == 0){
        printf("Não é uma equação do segundo grau.");
    }
    else if(delta < 0){
        printf("Não tem raizes reais.");
    }
    else{
        s1 = (-b + pow(delta, 0.5))/(2*a);
        s2 = (-b - pow(delta, 0.5))/(2*a);
        printf("As raizes são %f e %f", s1, s2);
    }
    return 0;
}