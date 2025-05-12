#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("O numero inserido e PAR\n");
    }else{
        printf("O numero inserido e IMPAR\n");
    }

    return 0;
}
