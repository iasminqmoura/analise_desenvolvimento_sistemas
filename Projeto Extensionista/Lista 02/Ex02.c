#include <stdio.h>
#include <stdlib.h>

int main() {
 
    float valorA, valorB, valorC, soma;

    printf("Insira o valor A: ");
    scanf("%f", &valorA);

    printf("Insira o valor B: ");
    scanf("%f", &valorB);

    printf("Insira o valor C: ");
    scanf("%f", &valorC);

    soma = valorA + valorB;

    if(soma < valorC){
        printf("A soma de A + B e menor que %.2f\n", valorC);
    }

    return 0;
}
