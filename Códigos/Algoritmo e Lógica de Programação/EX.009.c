// Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área

#include <stdio.h>
#include <conio.h>

void main (){
    float altura;
    printf ("Digite a altura do triangulo: ");
    scanf ("%f", &altura);
    float base;
    printf ("Digite a base do triangulo: ");
    scanf ("%f", &base);

    float area = altura * base;

    printf ("Como resultado da area do triangulo: %.2f", area);
    getch ();

}
