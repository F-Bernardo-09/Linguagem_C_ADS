/*

Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*****
****
***
**
*

*/

#include <stdio.h>
#include <conio.h>

void main(){
    int num, k, i;
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    for (i=num; i > 0; i--){
        for (k=i; k > 0; k--){
            printf ("*");
        }
        printf ("\n");
    }

    getch ();
}
