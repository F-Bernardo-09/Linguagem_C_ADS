/*

Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*
**
***
****
*****

*/

#include <stdio.h>
#include <conio.h>

void main (){
    int num, k, i;
    printf ("Digite um numero: ");
    scanf ("%d", &num);

    for (i = 0; i <= num; i++){
        for (k = 1; k <= i; k++){
            printf ("*");
        }
        printf ("\n");
    }
    getch ();
}