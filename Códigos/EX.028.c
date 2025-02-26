// Escreva um programa que leia as coordenadas x e y de um ponto e verifique a quantidade de quadrantes a que este ponto pertence.

#include <stdio.h>
#include <conio.h>

void main (){
    int pontoX, pontoY;
    printf ("Digite, respectivamente,  os pontos X e Y: ");
    scanf ("%d%d", &pontoX, &pontoY);
    if (pontoX == 0 || pontoY == 0){
        printf ("Esta localizado em dois quadrantes");
    }
    else if (pontoX == 0 && pontoY == 0){
        printf ("O ponto esta localizado em todos os quadrantes");
    }
    else {
        printf ("O ponto determinado esta em um quadrante");
    }
    getch();

}
