// Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e calcule o valor da hipotenusa.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
    float cateto1, cateto2;
    printf ("Digite o valor de cada cateto: ");
    scanf ("%f%f", &cateto1, &cateto2);
    float soma_dos_catetos = pow(cateto1, 2) + pow(cateto2, 2);
    float hipotenusa = sqrt (soma_dos_catetos);
    printf ("Hipotenusa de valor igual a: %.2f", hipotenusa);
    getch ();

}
