// Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu sucessor.

#include <stdio.h>
#include <conio.h>

void main (){
    int num;
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);
    int sucessor = num + 1;
    int antecessor = num - 1;
    printf ("%d... %d... %d...", antecessor, num, sucessor);

}
