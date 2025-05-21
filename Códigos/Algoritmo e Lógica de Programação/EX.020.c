// Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e imprima os 5 primeiros termos desta progressão.
// PA = a(1,2,3,4,5) = a1 + (1,2,3,4,5)*razão

#include <stdio.h>
#include <conio.h>

void main (){
    int termo_inicial, razao;
    printf ("Digite o termo inicial e a razao para calcularmos a progressão aritmetrica: ");
    scanf ("%d%d", &termo_inicial, &razao);
    int a1 = termo_inicial;
    int a2 = a1 + 2*razao;
    int a3 = a1 + 3*razao;
    int a4 = a1 + 4*razao;
    int a5 = a1 + 5*razao;

    printf ("%d - %d - %d - %d - %d", a1, a2, a3, a4, a5);
    getch ();

}
