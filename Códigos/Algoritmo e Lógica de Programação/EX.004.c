// Escreva um programa que leia o número inteiro e calcule o seu quadrado e sua raiz quadrada. 

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int num;
    printf ("Digite um numero inteiro:");
    scanf ("%d", &num);
    int quadrado = pow (num, 2);
    float raiz = sqrt (num);
    printf ("O numero digitado foi: %d\nMultiplicando por ele mesmo dah %d e sua raiz quadrada eh %.2f", num, quadrado, raiz);
    getch();

}
