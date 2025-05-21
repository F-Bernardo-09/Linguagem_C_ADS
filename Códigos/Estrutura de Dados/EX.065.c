/* Descrever um algoritmo para localizar um elemento aij da matriz A, armazenada segundo a estrutura obtida na
solução do exercício anterior */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int linha;
    int coluna;
    int valor;
} Elemento;

typedef struct {
    int n;       // numero de linhas
    int m;       // numero de colunas
    int k;       // numero de elementos nao nulos
    Elemento* elementos;
} MatrizEsparsa;

MatrizEsparsa* criarMatrizEsparsa(int n, int m, int k) {
    MatrizEsparsa* matriz = (MatrizEsparsa*) malloc(sizeof(MatrizEsparsa));
    matriz->n = n;
    matriz->m = m;
    matriz->k = k;
    matriz->elementos = (Elemento*) malloc(k * sizeof(Elemento));
    return matriz;
}

void exibirMatrizEsparsa(MatrizEsparsa* matriz) {
    printf("\nMatriz %dx%d com %d elementos nao nulos:\n", matriz->n, matriz->m, matriz->k);
    for (int i = 0; i < matriz->k; i++) {
        printf("(%d, %d) = %d\n", matriz->elementos[i].linha, matriz->elementos[i].coluna, matriz->elementos[i].valor);
    }
}

int buscarElemento(MatrizEsparsa* matriz, int i, int j) {
    for (int p = 0; p < matriz->k; p++) {
        if (matriz->elementos[p].linha == i && matriz->elementos[p].coluna == j) {
            return matriz->elementos[p].valor;
        }
    }
    return 0;
}

void liberarMatrizEsparsa(MatrizEsparsa* matriz) {
    free(matriz->elementos);
    free(matriz);
}

int main() {
    int n, m, k;
    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &m);
    printf("Informe o numero de elementos nao nulos: ");
    scanf("%d", &k);

    MatrizEsparsa* matriz = criarMatrizEsparsa(n, m, k);

    for (int i = 0; i < k; i++) {
        printf("\nElemento %d:\n", i + 1);
        printf("Linha (0 a %d): ", n - 1);
        scanf("%d", &matriz->elementos[i].linha);
        printf("Coluna (0 a %d): ", m - 1);
        scanf("%d", &matriz->elementos[i].coluna);
        printf("Valor: ");
        scanf("%d", &matriz->elementos[i].valor);
    }

    exibirMatrizEsparsa(matriz);

    int opcao = 1;
    while (opcao) {
        int i, j;
        printf("\nDeseja buscar um elemento? (1 = sim, 0 = nao): ");
        scanf("%d", &opcao);
        if (opcao) {
            printf("Informe a linha: ");
            scanf("%d", &i);
            printf("Informe a coluna: ");
            scanf("%d", &j);
            int valor = buscarElemento(matriz, i, j);
            printf("Elemento na posicao (%d, %d): %d\n", i, j, valor);
        }
    }

    liberarMatrizEsparsa(matriz);
    printf("Programa encerrado.\n");
    return 0;
}
