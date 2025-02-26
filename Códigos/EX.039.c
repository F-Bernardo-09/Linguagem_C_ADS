#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (){
    char palavra[100];
    printf("Oi! Vamos brincar com uma palavrinha magica!\n");
    printf (" \n");
    printf("Digite uma palavra pequena, como MAMAE ou PAPAI: ");
    scanf("%s", palavra);

    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }
palavra = tomaz
palavra2 = zamot
if (palavra == palavra2)

}
