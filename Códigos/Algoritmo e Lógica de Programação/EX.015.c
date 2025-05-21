// Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto por cada metro quadrado de um projeto arquitetônico e calcule o custo final do projeto

#include <stdio.h>
#include <conio.h>

void main (){
    float tamanho_m, preco;
    printf ("Digite o tamanho da sua em metros quadrado e o valor por metro: ");
    scanf ("%f%f", &tamanho_m, &preco);
    float custo_projeto = tamanho_m * preco;
    printf ("O valor do projeto sera: %.2f", custo_projeto);
    getch ();

}
