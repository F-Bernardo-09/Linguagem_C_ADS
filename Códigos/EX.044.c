/*
Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia umnúmero inteiro N entre 3 e 10 e verifique quantas 
sequências de tamanho N formada por elementos consecutivos existem no vetor, de forma que todos os elementos da sequência formem 
uma progressão aritmética. Por exemplo, no vetor (0, 4, 8, 10, 4, 9, 12, 15, 2, 15), 
podemos encontrar duas sequencias de três (N=3) elementos (0, 4, 8), (9, 12, 15) que formam uma progressão aritmética.
*/

#include <stdio.h>
#include <conio.h>

const int tamanho = 5;

void main (){
    int vetor[tamanho], n, i, k, j, aux, razao, contagem = 0;

    for (i =0; i < tamanho; i++){
        printf ("%d numero inteiro: ", i+1);
        scanf ("%d", &vetor[i]);
    }

    printf ("Digite um valor para N (entre 3 e 10): ");
    scanf ("%d", &n);

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < tamanho; i++){
        razao = vetor[i + 1] - vetor [i];

        if (vetor[i+1] - vetor [i] == razao){
            for (j = 0; j < n; j++){
                printf ("%d ", vetor[i]);
            }
        }
    }

    getch ();

}
