/*
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N e determine a quantidade de números primos na
coluna N
*/

const int ordem = 3;

#include <stdio.h>
#include <conio.h>

void main (){
    int matriz[ordem][ordem], n, i, k, divisores, eh_primo;
    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf ("Digite um numero: ");
            scanf ("%d", &matriz[i][k]);
        }
    }
    printf ("Qual coluna deseja verificar: ");
    scanf ("%d", &n);
    
    for (k = 0; k < ordem; k++){ 
        for (i = 1; i <= matriz[k][n]; i++){
            if (matriz[k][n] % i == 0){
                divisores += 1;
            }
        }
        
        if (divisores <= 2){
            eh_primo += 1;
        }
    }

    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf ("%d ", matriz[i][k]);
        }
        printf ("\n");
    }

    printf ("A quantidade de numeros primos na coluna solicitada eh: %d", eh_primo);
    getch();

}
