#include <stdio.h>

int main{
    int a, b, c, maior;
    if(a>=b && a>=c){
	maior = a;
    }
    else if(b>=a && b>=c){
	maior = b;
    }
    else{
	maior = c;
    }
    return 0; 
}