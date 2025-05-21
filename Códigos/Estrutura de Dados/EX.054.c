// Suponha um vetor de Pessoa com 5 elementos. Como inicializar esse vetor e atribuir um nome e idade ao primeiro elemento? 

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[5]; 

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", &pessoas[0].nome);  

    printf("\nDigite a idade da primeira pessoa: ");
    scanf("%d", &pessoas[0].idade);

    printf("\n--- Dados da primeira pessoa ---\n");
    printf("Nome: %s\n", pessoas[0].nome);
    printf("Idade: %d\n", pessoas[0].idade);

    return 0;
}
