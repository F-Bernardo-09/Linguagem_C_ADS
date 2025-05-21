#include <stdio.h>
#include <conio.h>

void main (){
    int resultado, divisor, num;
    printf ("Digite um numero: ");
    scanf ("%d", &resultado);
    while (resultado > 1){
        for (divisor = 2; divisor > 1; divisor++){
            resultado = resultado / divisor;
            printf ("%d x", divisor);
        }
    }
    printf ("1");
    getch ();
} 
