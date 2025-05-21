/* 
Escreva um programa que leia o preço de produção de um determinado produto e a
margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de
venda. 
*/

#include <stdio.h>
#include <conio.h>

void main (){
    float preco_producao, lucro;
    printf ("Digite o custo de producao e qual eh sua expectativa como margem de lucro: ");
    scanf ("%f%f", &preco_producao, &lucro);
    float preco_final = preco_producao + lucro;
    printf ("O valor do seu produto deve ser: %.2f", preco_final);
    getch ();

}
