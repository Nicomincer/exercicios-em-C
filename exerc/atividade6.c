#include <stdio.h>

int main()
{  
    int v1, v2, v3, maior, menor, s;

    printf("Digite seu primeiro valor:");
    scanf("%d", &v1);
    printf("Digite seu segundo valor:");
    scanf("%d", &v2);
    printf("Digite seu terceiro valor:");
    scanf("%d", &v3);
    if(v1>=v2){
        //Caso v1 maior que v2
        if(v2>=v3){
            menor = v3;
            maior = v1;
        }
        //Caso v3 seja maior que v2
        else{
            if(v3>=v1){
                maior = v3;
                menor = v2;
            }
            //Caso v1 seja maior que v3 e maior que v2
            else{
                maior = v1;
                menor = v2;
            }
        }
    }
    else{
        //Caso v2 seja maior que v1
        if(v2>=v3){
            //Caso v2 seja maior que v3
            if(v3 >= v1){
                //Caso v3 seja maior que v1
                maior = v2;
                menor = v1;
            }
            //Caso v1 seja maior que v3
            else{
                maior = v2;
                menor = v3;
                
            }
        }    
                //Caso V3 seja maior que v2 tendo v2 maior que v1
        else{
            maior = v3;
            menor = v1;
        }
    }
    s = maior - menor;
    printf("A diferença entre o maior valor %d e o menor valor %d é %d", maior, menor, s);
    return 0; 
}