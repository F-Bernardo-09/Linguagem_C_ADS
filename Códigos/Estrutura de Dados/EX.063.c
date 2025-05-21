/* Descrever algoritmos de inserção e remoção em uma lista não ordenada, em alocação encadeada. */

#include <stdio.h>
#include <stdlib.h>

// Definicao da estrutura do no
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Funcao para criar um novo no
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro: Falha na alocacao de memoria\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Funcao para inserir no inicio da lista
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Elemento %d inserido no inicio da lista\n", data);
}

// Funcao para inserir no final da lista
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    
    // Se a lista estiver vazia
    if (*head == NULL) {
        *head = newNode;
        printf("Elemento %d inserido no final da lista\n", data);
        return;
    }
    
    // Percorre ate o ultimo no
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Insere o novo no no final
    temp->next = newNode;
    printf("Elemento %d inserido no final da lista\n", data);
}

// Funcao para inserir apos um elemento especifico
void insertAfter(Node** head, int key, int data) {
    // Verifica se a lista esta vazia
    if (*head == NULL) {
        printf("Lista vazia, elemento %d nao encontrado\n", key);
        return;
    }
    
    // Procura o elemento chave
    Node* temp = *head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    
    // Se o elemento chave nao foi encontrado
    if (temp == NULL) {
        printf("Elemento %d nao encontrado na lista\n", key);
        return;
    }
    
    // Cria um novo no e insere apos o elemento chave
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Elemento %d inserido apos o elemento %d\n", data, key);
}

// Funcao para remover um elemento pelo valor
void removeByValue(Node** head, int data) {
    // Verifica se a lista esta vazia
    if (*head == NULL) {
        printf("Lista vazia, nada a remover\n");
        return;
    }
    
    // Caso especial: remover o primeiro no
    if ((*head)->data == data) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Elemento %d removido da lista\n", data);
        return;
    }
    
    // Percorre a lista procurando o elemento a ser removido
    Node* current = *head;
    Node* prev = NULL;
    
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }
    
    // Se o elemento nao foi encontrado
    if (current == NULL) {
        printf("Elemento %d nao encontrado na lista\n", data);
        return;
    }
    
    // Remove o no
    prev->next = current->next;
    free(current);
    printf("Elemento %d removido da lista\n", data);
}

// Funcao para exibir a lista
void displayList(Node* head) {
    if (head == NULL) {
        printf("Lista vazia\n");
        return;
    }
    
    printf("Lista: ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Funcao para liberar a memoria utilizada pela lista
void freeList(Node** head) {
    Node* current = *head;
    Node* next;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    *head = NULL;
}

// Funcao principal com menu interativo
int main() {
    Node* head = NULL;
    int choice, data, key;
    
    do {
        printf("\n==== MENU - LISTA ENCADEADA NAO ORDENADA ====\n");
        printf("1. Inserir no inicio\n");
        printf("2. Inserir no final\n");
        printf("3. Inserir apos um elemento\n");
        printf("4. Remover elemento\n");
        printf("5. Exibir lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
                
            case 2:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
                
            case 3:
                printf("Digite o elemento apos o qual inserir: ");
                scanf("%d", &key);
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &data);
                insertAfter(&head, key, data);
                break;
                
            case 4:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &data);
                removeByValue(&head, data);
                break;
                
            case 5:
                displayList(head);
                break;
                
            case 0:
                printf("Saindo do programa...\n");
                break;
                
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (choice != 0);
    
    // Libera a memoria utilizada pela lista
    freeList(&head);
    
    return 0;
}
