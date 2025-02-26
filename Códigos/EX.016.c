// Escreva um programa que leia os valores de dois ângulos internos de um triângulo e calcule o valor do terceiro ângulo

#include <stdio.h>
#include <conio.h>

void main (){
    float angulo_1, angulo_2;
    printf ("Digite os dois angulos do triangulo para calcularmos o terceiro: ");
    scanf ("%f%f", &angulo_1, &angulo_2);
    float angulo_3 = 180 - (angulo_1 + angulo_2);
    printf ("O valor do terceiro angulo, eh: %.2f", angulo_3);
    getch ();

}
