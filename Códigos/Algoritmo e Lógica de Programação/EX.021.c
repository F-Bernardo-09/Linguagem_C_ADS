// Escreva um programa que leia um número inteiro N e imprima dos 10 primeiroselementos da sua tabuada.

#include <stdio.h>
#include <conio.h>

void main (){
    int numero;
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);
    printf ("1 x %d = %d\n", numero, numero*1);
    printf ("2 x %d = %d\n", numero, numero*2);
    printf ("3 x %d = %d\n", numero, numero*3);
    printf ("4 x %d = %d\n", numero, numero*4);
    printf ("5 x %d = %d\n", numero, numero*5);
    printf ("6 x %d = %d\n", numero, numero*6);
    printf ("7 x %d = %d\n", numero, numero*7);
    printf ("8 x %d = %d\n", numero, numero*8);
    printf ("9 x %d = %d\n", numero, numero*9);
    printf ("10x %d = %d\n", numero, numero*10);
    getch ();

}
