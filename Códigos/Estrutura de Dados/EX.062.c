/* Apresentar o algoritmo de alteração do campo info de uma lista circular encadeada com nó-cabeça */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura do nó
typedef struct Noh {
    int info;
    struct Noh *prox;
} Noh;

// Cria e inicializa a lista com nó-cabeça
Noh* criarLista() {
    Noh *cabeca = (Noh*)malloc(sizeof(Noh));
    if (cabeca == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    cabeca->info = 0;  // valor arbitrário
    cabeca->prox = cabeca;
    return cabeca;
}

// Insere no fim
void inserirFim(Noh *cabeca, int valor) {
    Noh *novo = (Noh*)malloc(sizeof(Noh));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novo->info = valor;

    Noh *p = cabeca;
    while (p->prox != cabeca) {
        p = p->prox;
    }

    novo->prox = cabeca;
    p->prox = novo;
}

// Exibe a lista
void exibirLista(Noh *cabeca) {
    Noh *p = cabeca->prox;
    if (p == cabeca) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista: ");
    while (p != cabeca) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

// Altera o primeiro nó com valor igual ao antigo
bool alterarInfo(Noh *cabeca, int valorAntigo, int novoValor) {
    Noh *p = cabeca->prox;
    while (p != cabeca) {
        if (p->info == valorAntigo) {
            p->info = novoValor;
            return true;
        }
        p = p->prox;
    }
    return false;
}

// Libera memória da lista
void liberarLista(Noh *cabeca) {
    Noh *p = cabeca->prox;
    while (p != cabeca) {
        Noh *temp = p;
        p = p->prox;
        free(temp);
    }
    free(cabeca);
}

// Menu interativo
int main() {
    Noh *lista = criarLista();
    int opcao, valor, novo;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inserir valor\n");
        printf("2 - Exibir lista\n");
        printf("3 - Alterar valor\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a inserir: ");
                scanf("%d", &valor);
                inserirFim(lista, valor);
                break;

            case 2:
                exibirLista(lista);
                break;

            case 3:
                printf("Digite o valor a ser alterado: ");
                scanf("%d", &valor);
                printf("Digite o novo valor: ");
                scanf("%d", &novo);
                if (alterarInfo(lista, valor, novo)) {
                    printf("Valor alterado com sucesso.\n");
                } else {
                    printf("Valor nao encontrado na lista.\n");
                }
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    liberarLista(lista);
    return 0;
}
