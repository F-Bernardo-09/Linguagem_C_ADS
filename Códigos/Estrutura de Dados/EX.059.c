/* Apresentar algoritmos para um deque em alocação sequencial. São dados fornecidos:
– na inserção: o nó a ser inserido e a extremidade desejada (E1 ou E2),
– na remoção: a extremidade da remoção */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Estrutura do deque
typedef struct {
    int dados[MAX];
    int ini;
    int fim;
} Deque;
// Inicializa o deque
void inicializaDeque(Deque *d) {
    d->ini = MAX / 2;
    d->fim = MAX / 2;
}
// Insere um elemento em uma extremidade
int insere(Deque *d, int valor, int extremidade) {
    if (extremidade == 1) {  // E1 - frente
        if (d->ini == 0) return 0;  // Cheio na frente
        d->ini--;
        d->dados[d->ini] = valor;
    } else {  // E2 - fundo
        if (d->fim == MAX) return 0;  // Cheio no fundo
        d->dados[d->fim] = valor;
        d->fim++;
    }
    return 1;  // Sucesso
}
// Remove um elemento de uma extremidade
int removeElem(Deque *d, int *valor, int extremidade) {
    if (d->ini == d->fim) return 0;  // Deque vazio
    
    if (extremidade == 1) {  // E1 - frente
        *valor = d->dados[d->ini];
        d->ini++;
    } else {  // E2 - fundo
        d->fim--;
        *valor = d->dados[d->fim];
    }
    return 1;  // Sucesso
}
// Exibe o conteudo do deque
void exibeDeque(Deque *d) {
    int i;
    
    if (d->ini == d->fim) {
        printf("Deque vazio!\n");
        return;
    }
    
    printf("Conteudo atual do deque: ");
    for (i = d->ini; i < d->fim; i++) {
        printf("%d ", d->dados[i]);
    }
    printf("\n");
}
// Programa principal
int main() {
    Deque d;
    int op, valor, ext, sucesso;
    
    inicializaDeque(&d);
    
    do {
        printf("\n===== GERENCIADOR DE DEQUE =====\n");
        printf("1 - Adicionar elemento ao deque\n");
        printf("2 - Retirar elemento do deque\n");
        printf("3 - Visualizar elementos do deque\n");
        printf("4 - Limpar tela\n");
        printf("0 - Encerrar programa\n");
        printf("--------------------------------\n");
        printf("Digite sua escolha: ");
        scanf("%d", &op);
        
        switch(op) {
            case 1:  // Inserir
                printf("\n-- ADICIONAR ELEMENTO --\n");
                printf("Informe o valor a adicionar: ");
                scanf("%d", &valor);
                printf("Posicao (1 - Inicio / 2 - Final): ");
                scanf("%d", &ext);
                
                if (ext != 1 && ext != 2) {
                    printf("Posicao invalida! Escolha 1 para inicio ou 2 para final.\n");
                    break;
                }
                
                sucesso = insere(&d, valor, ext);
                if (!sucesso) {
                    printf("Erro: impossivel adicionar (deque sem espaco).\n");
                } else {
                    printf("Elemento %d adicionado com sucesso!\n", valor);
                }
                break;
                
            case 2:  // Remover
                printf("\n-- RETIRAR ELEMENTO --\n");
                printf("De qual posicao deseja retirar (1 - Inicio / 2 - Final): ");
                scanf("%d", &ext);
                
                if (ext != 1 && ext != 2) {
                    printf("Posicao invalida! Escolha 1 para inicio ou 2 para final.\n");
                    break;
                }
                
                sucesso = removeElem(&d, &valor, ext);
                if (sucesso) {
                    printf("Elemento retirado: %d\n", valor);
                } else {
                    printf("Erro: deque esta vazio.\n");
                }
                break;
                
            case 3:  // Exibir
                printf("\n-- VISUALIZACAO DO DEQUE --\n");
                exibeDeque(&d);
                break;
                
            case 4:  // Limpar tela
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                printf("Tela limpa!\n");
                break;
                
            case 0:  // Sair
                printf("\nFinalizando o programa de gerenciamento de deque...\n");
                printf("Obrigado por utilizar!\n");
                break;
                
            default:
                printf("Opcao invalida! Por favor escolha uma opcao entre 0 e 4.\n");
        }
    } while (op != 0);
    
    return 0;
}
