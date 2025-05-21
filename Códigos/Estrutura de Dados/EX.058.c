// Faça um código de uma arvore BST que recebe 10 numeros em qualquer ordem e depois remove-os na ordem inversa a inserção, linha a linha.

#include <stdio.h>
#include <stdlib.h>

// Estrutura do no da arvore
typedef struct Node {
    int valor;
    struct Node *esquerda;
    struct Node *direita;
} Node;

// Cria um novo no
Node* novoNo(int valor) {
    Node* no = (Node*) malloc(sizeof(Node));
    no->valor = valor;
    no->esquerda = NULL;
    no->direita = NULL;
    return no;
}

// Insere um valor na BST
Node* inserir(Node* raiz, int valor) {
    if (raiz == NULL)
        return novoNo(valor);
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else
        raiz->direita = inserir(raiz->direita, valor);
    return raiz;
}

// Encontra o menor valor na subarvore
Node* minimo(Node* raiz) {
    while (raiz->esquerda != NULL)
        raiz = raiz->esquerda;
    return raiz;
}

// Remove um no da arvore
Node* remover(Node* raiz, int valor) {
    if (raiz == NULL) return NULL;

    if (valor < raiz->valor) {
        raiz->esquerda = remover(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = remover(raiz->direita, valor);
    } else {
        // No com 0 ou 1 filho
        if (raiz->esquerda == NULL) {
            Node* temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL) {
            Node* temp = raiz->esquerda;
            free(raiz);
            return temp;
        }
        // No com dois filhos
        Node* temp = minimo(raiz->direita);
        raiz->valor = temp->valor;
        raiz->direita = remover(raiz->direita, temp->valor);
    }
    return raiz;
}

// Descobre de onde o no sera removido
const char* origem(Node* raiz, int valor) {
    if (raiz == NULL) return "desconhecido";
    if (raiz->valor == valor) return "raiz";
    if (raiz->esquerda && raiz->esquerda->valor == valor) return "esquerda";
    if (raiz->direita && raiz->direita->valor == valor) return "direita";
    if (valor < raiz->valor)
        return origem(raiz->esquerda, valor);
    else
        return origem(raiz->direita, valor);
}

int main() {
    Node* raiz = NULL;
    int numeros[10];
    int i, valor;

    // Entrada dos numeros
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &valor);
        numeros[i] = valor;
        raiz = inserir(raiz, valor);
    }

    // Remocao em ordem inversa a insercao
    printf("\nRemovendo os numeros da arvore (ordem inversa a insercao):\n");
    for (i = 9; i >= 0; i--) {
        const char* pos = origem(raiz, numeros[i]);
        printf("Removido: %d (%s)\n", numeros[i], pos);
        raiz = remover(raiz, numeros[i]);
    }

    return 0;
}
