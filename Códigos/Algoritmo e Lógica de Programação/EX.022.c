/* Escreva um programa que leia o comprimento e a largura de uma cisterna e a
quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
metros ele deve encher a cisterna para obter a quantidade de litros desejada. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

const float pi = 3.14;

void main (){
    float comprimento, largura, litros;
    printf ("Insira o comprimento e largura da cisterna em metros, alem da quantidade de litros que deseja armazenar: ");
    scanf ("%f%f%f", &comprimento, &largura, &litros);
    float volume = pi * comprimento * (pow (largura, 2));
    // 1 metro cubico = 1000
    float metro_cheio = volume - (litros * 0,001);
    printf ("A quantidade de metros cubicos de sua sisterna eh: %.2f\n", volume);
    printf ("Sabendo que deseja armazenar %.2f litros, fica com  %.2f metros cubicos disponiveis" , litros, metro_cheio);
    getch ();

}
