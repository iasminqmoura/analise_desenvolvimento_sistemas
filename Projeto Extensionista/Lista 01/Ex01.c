#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado1, lado2, area;

    printf("Insira o primeiro lado do terreno: ");
    scanf("%f", &lado1);

    printf("Insira o segundo lado do terreno: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A area total do terreno e: %.2f\n", area);  // %.2f para exibir com 2 casas decimais

    system("PAUSE");
    return 0;
}
