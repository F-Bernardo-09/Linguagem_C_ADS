// Escreva um programa que leia o valor de uma distância percorrida em km e o tempo gasto em horas e calcule a velocidade média em m/s.

#include <stdio.h>
#include <conio.h>

void main (){
    float percurso_km, percurso_h;

    printf ("Quantos kilometros voce percorreu? ");
    scanf ("%f", &percurso_km);
    printf ("Em quantas horas durou esse percurso? ");
    scanf ("%f", &percurso_h);

    float km_h = percurso_km / percurso_h;
    float  m_s = km_h / 3.6;
    
    printf ("Sua velocidade em %.2f m/s", m_s);
    getch ();

}
