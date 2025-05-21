/* Apresentar os algoritmos de inserção e remoção numa lista circular encadeada. */

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* prox;
} No;

// Funcao para inserir no inicio da lista
void inserirInicio(No** inicio, int valor) {
    No* novo = malloc(sizeof(No));
    novo->valor = valor;

    if (*inicio == NULL) {
        novo->prox = novo;
        *inicio = novo;
    } else {
        No* temp = *inicio;
        while (temp->prox != *inicio)
            temp = temp->prox;

        novo->prox = *inicio;
        temp->prox = novo;
        *inicio = novo;
    }
}

// Funcao para inserir no final da lista
void inserirFinal(No** inicio, int valor) {
    No* novo = malloc(sizeof(No));
    novo->valor = valor;

    if (*inicio == NULL) {
        novo->prox = novo;
        *inicio = novo;
    } else {
        No* temp = *inicio;
        while (temp->prox != *inicio)
            temp = temp->prox;

        temp->prox = novo;
        novo->prox = *inicio;
    }
}

// Funcao para remover um valor da lista
void remover(No** inicio, int valor) {
    if (*inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* atual = *inicio;
    No* anterior = NULL;

    // Caso: apenas um elemento
    if (atual->prox == *inicio && atual->valor == valor) {
        free(atual);
        *inicio = NULL;
        return;
    }

    // Procurar o valor
    do {
        if (atual->valor == valor)
            break;

        anterior = atual;
        atual = atual->prox;
    } while (atual != *inicio);

    if (atual->valor != valor) {
        printf("Valor nao encontrado.\n");
        return;
    }

    if (atual == *inicio) {
        anterior = *inicio;
        while (anterior->prox != *inicio)
            anterior = anterior->prox;

        anterior->prox = atual->prox;
        *inicio = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
}

// Funcao para imprimir a lista
void imprimir(No* inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No* temp = inicio;
    printf("Lista: ");
    do {
        printf("%d ", temp->valor);
        temp = temp->prox;
    } while (temp != inicio);
    printf("\n");
}

// Menu interativo
void menu() {
    No* lista = NULL;
    int opcao, valor;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inserir no inicio\n");
        printf("2. Inserir no final\n");
        printf("3. Remover um valor\n");
        printf("4. Imprimir lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;

            case 2:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirFinal(&lista, valor);
                break;

            case 3:
                printf("Digite o valor a remover: ");
                scanf("%d", &valor);
                remover(&lista, valor);
                break;

            case 4:
                imprimir(lista);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
}

int main() {
    menu();
    return 0;
}
