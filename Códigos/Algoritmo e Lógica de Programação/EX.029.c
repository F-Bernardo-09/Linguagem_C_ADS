// Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número lido é ou não um palíndromo

#include <stdio.h>
#include <conio.h>

void main (){
    int num;
    printf ("Digite um numero inteiro entre 1000 e 9999: ");
    scanf ("%d", &num);
    int milhar = num / 1000;
    int centena = (num % 1000) / 100;
    int dezena = (((num % 1000) % 100) / 10);
    int unidade = (((num % 1000) % 100) % 10);
    int palidromo = milhar + centena*10 +dezena*100 + unidade*1000;

    if (num == palidromo){
        printf ("O inverso de %d eh %d, ou seja, eh um palindromo.", num, palidromo);
    }
    else {
        printf ("O inverso de %d nao eh  %d, ou seja, nao eh um palindromo.", num, palidromo);
    }
    getch ();

}
