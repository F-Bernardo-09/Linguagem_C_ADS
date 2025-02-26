/* Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual quadrante este ponto pertence. 
Você pode supor que o ponto digitado pelo usuáriopertence a apenas um quadrante.
*/

#include <stdio.h>
#include <conio.h>

void main (){
    int pontoX, pontoY;
    printf ("Digite, respectivamente,  o ponto X e Y: ");
    scanf ("%d%d", &pontoX, &pontoY);

    if (pontoX > 0 && pontoY == 0){printf ("Esta no localizado entre o quadrante 1 e 4");}
    else if (pontoX < 0 && pontoY == 0){printf ("Esta no localizado entre o quadrante 2 e 3");}
    else if (pontoX == 0 && pontoY > 0){printf ("Esta no localizado entre o quadrante 1 e 2");}
    else if (pontoX == 0 && pontoY < 0){printf ("Esta no localizado entre o quadrante 3 e 4");}
    else if (pontoX > 0 & pontoY > 0){printf ("Esta localizado no quadrante 1");}
    else if (pontoX < 0 & pontoY > 0){printf ("Esta localizado no quadrante 2");}
    else if (pontoX < 0 & pontoY < 0){printf ("Esta localizado no quadrante 3");}
    else if (pontoX > 0 & pontoY < 0){printf ("Esta localizado no quadrante 4");}
    else {printf ("O ponto esta localizado entre todos os quatro quadrantes");}

    getch();

}
