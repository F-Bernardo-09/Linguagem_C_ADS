/* Uma palavra é um palíndromo se a sequência de letras que a forma é a mesma, quer seja lida da esquerda para a
direita ou da direita para a esquerda (exemplo: raiar). Escrever um algoritmo eficiente para reconhecer se uma dada
palavra é um palíndromo. Escolher a estrutura de dados conveniente para representar a palavra. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAM 100

// Definicao da estrutura de pilha
typedef struct {
    char dados[MAX_TAM];
    int topo;
} Pilha;

// Inicializa a pilha
void inicializaPilha(Pilha *p) {
    p->topo = -1;
}

// Verifica se a pilha esta vazia
int pilhaVazia(Pilha *p) {
    return (p->topo == -1);
}

// Verifica se a pilha esta cheia
int pilhaCheia(Pilha *p) {
    return (p->topo == MAX_TAM - 1);
}

// Adiciona um elemento na pilha
void empilha(Pilha *p, char c) {
    if (!pilhaCheia(p)) {
        p->topo++;
        p->dados[p->topo] = c;
    } else {
        printf("Erro: Pilha cheia!\n");
    }
}

// Remove um elemento da pilha
char desempilha(Pilha *p) {
    char c;
    if (!pilhaVazia(p)) {
        c = p->dados[p->topo];
        p->topo--;
        return c;
    } else {
        printf("Erro: Pilha vazia!\n");
        return '\0';
    }
}

// Funcao para verificar se uma palavra e um palindromo usando pilha
int ehPalindromo(char *palavra) {
    Pilha p;
    inicializaPilha(&p);
    
    int i;
    int tamanho = strlen(palavra);
    
    // Empilha primeira metade da palavra
    for (i = 0; i < tamanho / 2; i++) {
        empilha(&p, tolower(palavra[i]));
    }
    
    // Se o tamanho for impar, ignoramos o caractere do meio
    if (tamanho % 2 != 0) {
        i++;
    }
    
    // Compara a segunda metade com os elementos desempilhados
    while (i < tamanho) {
        char topo = desempilha(&p);
        if (tolower(palavra[i]) != topo) {
            return 0; // Nao e palindromo
        }
        i++;
    }
    
    return 1; // E palindromo
}

int main() {
    char palavra[MAX_TAM];
    
    printf("Digite uma palavra para verificar se e um palindromo: ");
    scanf("%s", palavra);
    
    if (ehPalindromo(palavra)) {
        printf("A palavra %s e um palindromo.\n", palavra);
    } else {
        printf("A palavra %s nao e um palindromo.\n", palavra);
    }
    
    return 0;
}