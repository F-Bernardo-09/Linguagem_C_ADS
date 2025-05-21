// Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu perímetro.

#include <stdio.h>
#include <conio.h>

void main (){
    float lado;
    printf ("Digite a medida do lado do quadrado que deseja calcular:");
    scanf ("%f", &lado);
    float area = lado * lado;
    float perimetro = lado *4;

    printf ("Sabendo que cada lado tem como medida: %.2f\nA area sera igual a %.2f e o perimetro %.2f.", lado, area, perimetro);
    getch ();

}
