/* Criar algoritmos de inserção e remoção para duas pilhas armazenadas em alocação sequencial que compartilham a memória de dimensão M */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 4 // Tamanho da memoria compartilhada

// Estrutura para armazenar as duas pilhas
typedef struct {
    int elementos[M];  // Array compartilhado para as duas pilhas
    int topo1;         // Topo da pilha 1 (cresce do inicio para o final)
    int topo2;         // Topo da pilha 2 (cresce do final para o inicio)
} DuasPilhas;

// Inicializa as duas pilhas
void inicializarPilhas(DuasPilhas *pilhas) {
    pilhas->topo1 = -1;            
    pilhas->topo2 = M;             
}

// Verifica se a pilha 1 esta vazia
bool estaVaziaPilha1(DuasPilhas *pilhas) {
    return (pilhas->topo1 == -1);
}

// Verifica se a pilha 2 esta vazia
bool estaVaziaPilha2(DuasPilhas *pilhas) {
    return (pilhas->topo2 == M);
}

// Verifica se as pilhas estao cheias (se encontraram no meio)
bool estaoCheiasAsPilhas(DuasPilhas *pilhas) {
    return (pilhas->topo1 + 1 == pilhas->topo2);
}

// Insere um elemento na pilha 1
bool inserirPilha1(DuasPilhas *pilhas, int valor) {
    // Verifica se ha espaco disponivel
    if (estaoCheiasAsPilhas(pilhas)) {
        printf("Erro: as pilhas estao cheias!\n");
        return false;
    }
    
    // Incrementa o topo da pilha 1 e insere o elemento
    pilhas->topo1++;
    pilhas->elementos[pilhas->topo1] = valor;
    return true;
}

// Insere um elemento na pilha 2
bool inserirPilha2(DuasPilhas *pilhas, int valor) {
    // Verifica se ha espaco disponivel
    if (estaoCheiasAsPilhas(pilhas)) {
        printf("Erro: as pilhas estao cheias!\n");
        return false;
    }
    
    // Decrementa o topo da pilha 2 e insere o elemento
    pilhas->topo2--;
    pilhas->elementos[pilhas->topo2] = valor;
    return true;
}

// Remove um elemento da pilha 1
bool removerPilha1(DuasPilhas *pilhas, int *valorRemovido) {
    // Verifica se a pilha 1 esta vazia
    if (estaVaziaPilha1(pilhas)) {
        printf("Erro: a pilha 1 esta vazia!\n");
        return false;
    }
    
    // Remove o elemento do topo da pilha 1
    *valorRemovido = pilhas->elementos[pilhas->topo1];
    pilhas->topo1--;
    return true;
}

// Remove um elemento da pilha 2
bool removerPilha2(DuasPilhas *pilhas, int *valorRemovido) {
    // Verifica se a pilha 2 esta vazia
    if (estaVaziaPilha2(pilhas)) {
        printf("Erro: a pilha 2 esta vazia!\n");
        return false;
    }
    
    // Remove o elemento do topo da pilha 2
    *valorRemovido = pilhas->elementos[pilhas->topo2];
    pilhas->topo2++;
    return true;
}

// Consulta o elemento no topo da pilha 1 sem remove-lo
bool consultarTopoPilha1(DuasPilhas *pilhas, int *valor) {
    // Verifica se a pilha 1 esta vazia
    if (estaVaziaPilha1(pilhas)) {
        printf("Erro: a pilha 1 esta vazia!\n");
        return false;
    }
    
    // Retorna o elemento do topo da pilha 1
    *valor = pilhas->elementos[pilhas->topo1];
    return true;
}

// Consulta o elemento no topo da pilha 2 sem remove-lo
bool consultarTopoPilha2(DuasPilhas *pilhas, int *valor) {
    // Verifica se a pilha 2 esta vazia
    if (estaVaziaPilha2(pilhas)) {
        printf("Erro: a pilha 2 esta vazia!\n");
        return false;
    }
    
    // Retorna o elemento do topo da pilha 2
    *valor = pilhas->elementos[pilhas->topo2];
    return true;
}

// Exibe o conteudo da pilha 1
void exibirPilha1(DuasPilhas *pilhas) {
    if (estaVaziaPilha1(pilhas)) {
        printf("Pilha 1 vazia!\n");
        return;
    }
    
    printf("Conteudo da Pilha 1 (do topo para a base): ");
    for (int i = pilhas->topo1; i >= 0; i--) {
        printf("%d ", pilhas->elementos[i]);
    }
    printf("\n");
}

// Exibe o conteudo da pilha 2
void exibirPilha2(DuasPilhas *pilhas) {
    if (estaVaziaPilha2(pilhas)) {
        printf("Pilha 2 vazia!\n");
        return;
    }
    
    printf("Conteudo da Pilha 2 (do topo para a base): ");
    for (int i = pilhas->topo2; i < M; i++) {
        printf("%d ", pilhas->elementos[i]);
    }
    printf("\n");
}

// Exibe o menu de opcoes
void exibirMenu() {
    printf("\n==== MENU DUAS PILHAS ====\n");
    printf("1. Inserir elemento na Pilha 1\n");
    printf("2. Inserir elemento na Pilha 2\n");
    printf("3. Remover elemento da Pilha 1\n");
    printf("4. Remover elemento da Pilha 2\n");
    printf("5. Consultar topo da Pilha 1\n");
    printf("6. Consultar topo da Pilha 2\n");
    printf("7. Exibir Pilha 1\n");
    printf("8. Exibir Pilha 2\n");
    printf("9. Exibir estado da memoria\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
}

// Limpa o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Exibe o estado atual da memoria compartilhada
void exibirEstadoMemoria(DuasPilhas *pilhas) {
    printf("\nEstado da memoria compartilhada:\n");
    printf("Tamanho total: %d\n", M);
    printf("Elementos na Pilha 1: %d\n", pilhas->topo1 + 1);
    printf("Elementos na Pilha 2: %d\n", M - pilhas->topo2);
    printf("Espaco livre: %d\n", pilhas->topo2 - pilhas->topo1 - 1);
    
    printf("\nRepresentacao visual:\n");
    for (int i = 0; i < M; i++) {
        if (i <= pilhas->topo1) {
            printf("[P1]"); // Regiao ocupada pela Pilha 1
        } else if (i >= pilhas->topo2) {
            printf("[P2]"); // Regiao ocupada pela Pilha 2
        } else {
            printf("[ ]"); // Regiao livre
        }
    }
    printf("\n");
}

// Programa principal com interface para o usuario
int main() {
    DuasPilhas pilhas;
    int opcao, valor, valorRemovido;
    
    inicializarPilhas(&pilhas);
    
    printf("=== IMPLEMENTACAO DE DUAS PILHAS EM MEMORIA COMPARTILHADA ===\n");
    printf("Este programa implementa duas pilhas que compartilham um array de memoria de tamanho %d.\n", M);
    printf("A Pilha 1 cresce do inicio para o fim do array.\n");
    printf("A Pilha 2 cresce do fim para o inicio do array.\n");
    printf("As pilhas estao cheias quando se encontram no meio.\n");
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        limparBuffer();
        
        switch (opcao) {
            case 1: // Inserir na Pilha 1
                printf("Digite o valor a ser inserido na Pilha 1: ");
                scanf("%d", &valor);
                limparBuffer();
                
                if (inserirPilha1(&pilhas, valor)) {
                    printf("Elemento %d inserido na Pilha 1 com sucesso!\n", valor);
                }
                break;
                
            case 2: // Inserir na Pilha 2
                printf("Digite o valor a ser inserido na Pilha 2: ");
                scanf("%d", &valor);
                limparBuffer();
                
                if (inserirPilha2(&pilhas, valor)) {
                    printf("Elemento %d inserido na Pilha 2 com sucesso!\n", valor);
                }
                break;
                
            case 3: // Remover da Pilha 1
                if (removerPilha1(&pilhas, &valorRemovido)) {
                    printf("Elemento %d removido da Pilha 1.\n", valorRemovido);
                }
                break;
                
            case 4: // Remover da Pilha 2
                if (removerPilha2(&pilhas, &valorRemovido)) {
                    printf("Elemento %d removido da Pilha 2.\n", valorRemovido);
                }
                break;
                
            case 5: // Consultar topo da Pilha 1
                if (consultarTopoPilha1(&pilhas, &valor)) {
                    printf("Elemento no topo da Pilha 1: %d\n", valor);
                }
                break;
                
            case 6: // Consultar topo da Pilha 2
                if (consultarTopoPilha2(&pilhas, &valor)) {
                    printf("Elemento no topo da Pilha 2: %d\n", valor);
                }
                break;
                
            case 7: // Exibir Pilha 1
                exibirPilha1(&pilhas);
                break;
                
            case 8: // Exibir Pilha 2
                exibirPilha2(&pilhas);
                break;
                
            case 9: // Exibir estado da memoria
                exibirEstadoMemoria(&pilhas);
                break;
                
            case 0: // Sair
                printf("Saindo do programa...\n");
                break;
                
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}
