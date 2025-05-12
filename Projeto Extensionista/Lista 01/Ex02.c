#include <stdio.h>
#include <stdlib.h>

int main() {
    int cavalos, ferraduras;

    printf("Insira a quantiade de cavalos adquiridos: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Voce precisa adquirir %d ferraduras\n", ferraduras);

    return 0;
}
