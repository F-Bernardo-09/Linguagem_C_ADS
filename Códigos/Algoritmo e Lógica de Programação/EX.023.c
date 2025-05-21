/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
    int x1, y1, x2, y2;
    printf ("Digite os valores de X e Y no ponto P: ");
    scanf ("%d%d", &x1, &y1);
    printf ("Digite os valores de X e Y no ponto Q: ");
    scanf ("%d%d", &x2, &y2);
    float distancia = sqrt ( (pow((x1 - x2), 2)) + (pow((y1 - y2), 2)) );
    printf ("A distancia entre o ponto P e Q sera %.2f", distancia);
    getch ();

}
