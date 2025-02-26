/*
Escreva um programa que leia uma matriz quadrada de ordem 3 de numeros inteiros e apos concluir a leitura, 
imprima a matriz informada pelo usuario
*/

#include <stdio.h>
#include <conio.h>

const int linhas = 3;
const int colunas = 3;

void main (){
    int i, j, mat[linhas][colunas];
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf ("Informe um numero inteiro: ");
            scanf ("%d", &mat[i][j]);
        }
    }
    
    printf ("A matriz informada foi: ");
    printf ("\n");

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }
    getch ();
}
