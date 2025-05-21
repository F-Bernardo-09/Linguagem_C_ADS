// Escreva um programa que leia um valor em KB e calcule o seu valor correspondente em bits, bytes, MB e GB.

#include <stdio.h>
#include <conio.h>

void main (){
    float tamanho_kb;
    printf ("Digite o tamanho do arquivo em KB: ");
    scanf ("%f", &tamanho_kb);
    float tamanho_bits = tamanho_kb * 8192;
    float tamanho_bytes = tamanho_kb * 1024;
    float tamanho_mb = tamanho_kb / 1024;
    float tamanho_gb = tamanho_kb / (1024*1024);

    printf ("O tamanho em BITS: %.2f\n", tamanho_bits);
    printf ("O tamanho em BYTES: %.2f\n", tamanho_bytes);
    printf ("O tamanho em MB: %.2f\n", tamanho_mb);
    printf ("O tamanho em GB: %.2f\n", tamanho_gb);
    getch ();

}
