// Torre de Hanoi Iterativa

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int *discos;
    int topo;
    char nome;
} Torre;

void inicializarTorre(Torre *t, int capacidade, char nome) {
    t->discos = (int*) malloc(capacidade * sizeof(int));
    t->topo = -1;
    t->nome = nome;
}

int estaVazia(Torre *t) {
    return t->topo == -1;
}

void push(Torre *t, int disco) {
    t->discos[++(t->topo)] = disco;
}

int pop(Torre *t) {
    return t->discos[(t->topo)--];
}

int topo(Torre *t) {
    return t->discos[t->topo];
}

void moverEntreTorres(Torre *src, Torre *dest) {
    int discoSrc = estaVazia(src) ? -1 : topo(src);
    int discoDest = estaVazia(dest) ? -1 : topo(dest);

    if (discoSrc == -1) {
        push(src, pop(dest));
        printf("Mover disco %d de %c para %c\n", topo(src), dest->nome, src->nome);
    } else if (discoDest == -1 || discoSrc < discoDest) {
        push(dest, pop(src));
        printf("Mover disco %d de %c para %c\n", topo(dest), src->nome, dest->nome);
    } else {
        push(src, pop(dest));
        printf("Mover disco %d de %c para %c\n", topo(src), dest->nome, src->nome);
    }
}

int main() {
    int n, i;
    printf("Digite o número de discos: ");
    scanf("%d", &n);

    int movimentos = pow(2, n) - 1;

    Torre A, B, C;
    inicializarTorre(&A, n, 'A');
    inicializarTorre(&B, n, 'B');
    inicializarTorre(&C, n, 'C');

    for (i = n; i >= 1; i--)
        push(&A, i);

    Torre *origem = &A, *aux = &B, *destino = &C;
    if (n % 2 == 0) {
        Torre *temp = destino;
        destino = aux;
        aux = temp;
    }

    printf("Os movimentos necessários são:\n");
    for (i = 1; i <= movimentos; i++) {
        if (i % 3 == 1)
            moverEntreTorres(origem, destino);
        else if (i % 3 == 2)
            moverEntreTorres(origem, aux);
        else
            moverEntreTorres(aux, destino);
    }

    free(A.discos);
    free(B.discos);
    free(C.discos);

    return 0;
}