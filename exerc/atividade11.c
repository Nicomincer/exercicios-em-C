#include <stdio.h>

int main(void){
    int n1 = 1000;
    int n2;
    while(n1 < 2000){
        n2 = n1*n1;
        printf("%d\n", n2);
        n1 += 1;
    }
    return 0;
}