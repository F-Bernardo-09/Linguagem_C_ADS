// Escreva um programa que leia o valor do raio de uma esfera e determine o seu volume.

#include <stdio.h>
#include <conio.h>
#include <math.h>

const float pi = 3.14;

void main (){
    float raio;
    printf ("Digite o raio da esfera: ");
    scanf ("%f", &raio);
    float volume = (4.00/3.00) * pi * pow(raio, 3);
    printf ("O volume da esfera sera igual a: %.2f", volume);
    getch ();

}
