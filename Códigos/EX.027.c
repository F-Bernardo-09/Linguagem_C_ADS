// Escreva um programa que leia três números inteiros distintos e identifique o maior número lido.

#include <stdio.h>
#include <conio.h>

void main (){
    int num1, num2, num3, maior;
    printf ("Digite tres numeros inteiros: ");
    scanf ("%d%d%d", &num1, &num2, &num3);
    
    if (num1 > num2 && num1 > num3) { maior = num1; }

    else if (num2 > num1 && num2 > num3) { maior = num2; }

    else { maior = num3; }

    printf ("O maior numero eh: %d", maior);
    getch ();

}
