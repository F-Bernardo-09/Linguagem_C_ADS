// Escreva um programa que leia três números e seus respectivos pesos e calcule a sua média ponderada.

#include <stdio.h>
#include <conio.h>

void main (){
    float num1, peso1, num2, peso2, num3, peso3;
    printf ("Ola, vamos calcular a media ponderada para voce, faca de acordo com o comando...\n");

    printf ("Digite seu primeiro numero: ");
    scanf ("%f", &num1);
    printf ("Qual o peso do numero %.2f: ", num1);
    scanf ("%f", &peso1);

    printf ("Digite seu segundo numero: ");
    scanf ("%f", &num2);
    printf ("Digite o peso do numero %.2f: ", num2);
    scanf ("%f", &peso2);

    printf ("Digite o terceiro e ultimo valor: ");
    scanf ("%f", &num3);
    printf ("Digite o peso do numero %.2f: ", num3);
    scanf ("%f", &peso3);

    float media_ponderada = ((num1*peso1)+ (num2*peso2) + (num3*peso3)) / (peso1 + peso2 + peso3);

    printf ("Sua media ponderada foi igual a: %.2f", media_ponderada);
    getch();

}
