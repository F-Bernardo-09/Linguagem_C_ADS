/* Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa e imprima o estado civil informado por extenso. 
As opções para o estado civil são: S (solteiro), C (casado), D (divorciado) e V (viúvo). */

#include <stdio.h>
#include <conio.h>

void main (){
    char estado;
    printf ("Digite a primeira letra que simboliza seu estado civil (S, C, D, V): ");
    scanf ("%c", &estado);
    switch (estado){
        case 'S': 
        case 's': printf ("Voce esta solteiro"); break;
        case 'C':
        case 'c': printf ("Voce esta casado"); break;
        case 'D':
        case 'd': printf ("Voce esta divorciado"); break;
        case 'V':
        case 'v': printf ("Voce esta viuvo"); break;
        default: printf ("Nenhuma das letras mencionadas foram digitadas");
    }
    getch ();
}
