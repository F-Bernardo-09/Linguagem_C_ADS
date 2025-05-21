/*
Escreva um programa em C que leia um número inteiro N e verifique a quantidade de
algarismos desse número. A verificação deve ser feita por meio de um subprograma
recursivo 
*/

#include <stdio.h>
#include <conio.h>

int contador (int num){
    int cont = 0;
    if (num < 10){
        return 1;
    }

    return 1 + contador(num/10);
}

void main (){
    int numero = 0;
    printf ("Digite um numero inteiro positivo: ");
    scanf ("%d", &numero);
    contador (numero);
    printf("Quantidade de algarismos: %d\n", contador(numero));    
    getch ();
    
}
