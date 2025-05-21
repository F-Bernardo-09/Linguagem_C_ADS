/* Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores. */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (){
    char caracter;
    printf ("Digite qualquer caracter: ");
    scanf ("%c", &caracter);
    switch (caracter) {
        case 'Q':
        case 'W': case 'E': case 'R': case 'T':
        case 'Y': case 'U': case 'I': case 'O':
        case 'P': case 'A': case 'S': case 'D':
        case 'F': case 'G': case 'H': case 'J':
        case 'K': case 'L': case 'Z': case 'X':
        case 'C': case 'V': case 'B': case 'N':
        case 'M': printf ("Eh uma letra maiuscula"); break;

        case 'q':
        case 'w': case 'e': case 'r': case 't':
        case 'y': case 'u': case 'i': case 'o':
        case 'p': case 'a': case 's': case 'd':
        case 'f': case 'g': case 'h': case 'j':
        case 'k': case 'l': case 'z': case 'x':
        case 'c': case 'v': case 'b': case 'n':
        case 'm': printf ("Eh uma letra minuscula"); break;


        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8':
        case '9': printf ("Eh um numeral"); break;

        default: printf ("Voce digitou dois ou mais caracteres ou o caracter digitado nao esta incluso no programa"); break;
    }
    getch ();
}
