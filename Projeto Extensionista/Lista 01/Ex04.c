#include <stdio.h>
#include <stdlib.h>

int main() {
   char nome[50];
   int idade, idadeDias;

   printf("Insira seu primeiro nome: \n");
   scanf("%s", nome);

   printf("Insira sua idade em anos: \n");
   scanf("%d", &idade);

    idadeDias = idade * 365;

    printf("%s, sua idade em dias e de %d dias\n", nome, idadeDias);

    return 0;
}
