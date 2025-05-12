#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int a, b, c;

    printf("Insira um numero A: ");
    scanf("%d", &a);

    printf("Insira um numero B: ");
    scanf("%d", &b);

    if(a == b){
        c = a + b;
        printf("C = %d \n", c);
    }else{
        c = a * b;
        printf("C = %d \n", c);
    }


    return 0;
}
