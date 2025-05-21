// Escreva um programa que leia três números inteiros e calcule a sua média aritmética

#include <stdio.h>
#include <conio.h>

void main () {
    float nota1, nota2, nota3;
    printf ("Digite sua primeira nota: ");
    scanf ("%f", &nota1);
    printf ("Digite sua segunda nota: ");
    scanf ("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf ("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf ("Como media voce alcancou: %.2f", media);
    getch ();

}
