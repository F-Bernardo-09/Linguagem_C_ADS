// Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu valor correspondente em Fahrenheit e em Kelvin.

#include <stdio.h>
#include <conio.h>

void main (){
    float celsius;
    printf ("Queremos converter sua temperatura agora para outras medidas\nDigite qualquer temperatura em Celsius: ");
    scanf ("%f", &celsius);

    float fahrenheit = (celsius*1.8) + 32;
    float kelvin = celsius + 273;

    printf ("Em Fahrenheit: %.2f\nEm Kelvin: %.2f", fahrenheit, kelvin);
    getch();

}
