#include <stdio.h>
#include <stdlib.h>

int main() {
    int paes, broas;
    float valorPaes, valorBroas, valorTotal, poupanca;

    printf("Insira a quantidade de paes (0,12 UN): ");
    scanf("%d", &paes);

    printf("Insira a quantidade de broas (1,50 UN): ");
    scanf("%d", &broas);

    valorPaes = paes * 0.12;
    valorBroas = broas * 1.50;
    valorTotal = valorPaes + valorBroas;

    printf("O total de paes e: %.2f\n", valorPaes);
    printf("O total de broas e: %.2f\n", valorBroas);
    printf("A conta total ficou em: %.2f\n", valorTotal);

    poupanca = valorTotal * 0.1;

    printf("O valor total arrecadado para poupanca e de: %.2f\n", poupanca);


    return 0;
}
