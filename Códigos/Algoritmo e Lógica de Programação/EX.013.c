// Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o valor informado pelo usuário em dólares

#include <stdio.h>
#include <conio.h>

void main (){
    float reais, valor_dolar;
    printf ("Escreva quantos reais deseja converter em dolar e a cotacao do dolar: ");
    scanf ("%f%f", &reais, &valor_dolar);
    float conversor = reais / valor_dolar;
    printf ("Convertendo os valores, tera: %.2f", conversor);
    getch ();

}
