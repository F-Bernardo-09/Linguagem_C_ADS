// Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua área e o seu comprimento.

#include <stdio.h>
#include <conio.h>

const float pi = 3.14;

void main (){
    float raio, area, comprimento;
    printf ("Digite o valor do Raio: ");
    scanf ("%f", &raio);
    area = pi * raio * raio;
    comprimento = 2 * raio * pi;
    printf ("A area sera de valor: %.2f.\nEnquanto ao comprimento, sera %.2f.", area, comprimento);
    getch ();

}
