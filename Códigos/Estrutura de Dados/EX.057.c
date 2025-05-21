// Faça um código de uma pilha que recebe 10 números e depois os remove apresentando linha a linha as remoções

#include <stdio.h>
#define TAMANHO 10

int main() {
    int pilha[TAMANHO];
    int topo = -1;
    int i, numero;

    // Inserir 10 números na pilha
    printf("Digite 10 numeros:\n");
    for(i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);
        if(topo < TAMANHO - 1) {
            topo++;
            pilha[topo] = numero;
        } else {
            printf("Pilha cheia!\n");
        }
    }

    // Remover (desempilhar) os números e imprimir
    printf("\nRemovendo os numeros da pilha:\n");
    while(topo >= 0) {
        printf("Removido: %d\n", pilha[topo]);
        topo--;
    }

    return 0;
}
