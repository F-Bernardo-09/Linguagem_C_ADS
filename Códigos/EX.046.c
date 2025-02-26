/*
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos
da linha N. 
*/

#include <stdio.h>
#include <conio.h>

const int ordem = 3;

void main (){
    int matriz[ordem][ordem], k, i, n, soma = 0;
    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf  ("Digite um numero: ");
            scanf ("%d", &matriz[i][k]);
        }
    }

    printf ("Qual linha deseja somar: ");
    scanf ("%d", &n);

    for (i = 0; i < ordem; i++){
        soma = soma + matriz[n][i];
    }

    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf  ("%d ", matriz[i][k]);
        }
        printf ("\n");
    }
    printf ("A soma da linha eh igual a: %d", soma);
    getch ();

}
