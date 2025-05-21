// Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu triplo, o seu quadrado, o seu cubo e a sua raiz quadrada

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
    int num;
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);
    int dobro = num*2;    
    int triplo = num*3;
    int quadrado = pow (num, 2);
    int cubo = pow (num, 3);
    float raiz = sqrt(num);

    printf ("O numero digitado foi %d\nFizemos alguns calculos basicos com ele...\n", num);
    printf ("O dobro do valor eh: %d\n", dobro);
    printf ("O triplo do valor eh: %d\n", triplo);
    printf ("O quadrado do valor eh: %d\n", quadrado);
    printf ("O cubo do valor eh: %d\n", cubo);
    printf ("A raiz do valor eh: %.2f", raiz);
    getch ();

}
