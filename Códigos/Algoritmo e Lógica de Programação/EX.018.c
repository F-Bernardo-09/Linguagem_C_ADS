/* Escreva um programa que leia dois números inteiros a e b e determine o maior
múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
igual a 50 é 48.
*/

#include <stdio.h>
#include <conio.h>

void main (){
    int numero_1, base;
    printf ("Escreva um numero e o seu maior multiplo: ");
    scanf ("%d%d", &numero_1, &base);
    int maior_multiplo = base - (base % numero_1);
    printf ("O maior multiplo em comum eh: %d", maior_multiplo);
    getch ();

}
