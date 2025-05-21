/* Escreva um programa que leia 4 numeros inteiros positivos e verifique se eles formam, na ordem em que foram informmados,
uma PA, PG, duas ao mesmo tempo ou nenhum tipo de progressão.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
    int num1, num2, num3, num4;
    printf ("Digite quatro numeros inteiros positivos: ");
    scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);

    int razao_pa1 = num2 - num1;
    int razao_pa2 = num3 - num2;
    float razao_pg1 = num2 / num1;
    float razao_pg2 = num3 / num2;

    if (num3 == num1+(3-1)*razao_pa1 && num3 == num1*(pow (razao_pg1, 2)) 
    || num4 == num2+(3-1)*razao_pa2 && num4 == num2*(pow (razao_pg2, 2))){
        printf ("Existe uma PA e PG");
    }
    else if (num3 == num1 + (3-1)*razao_pa1 || num4 == num2 + (3-1)*razao_pa2){
        printf ("Existe uma PA");
    }
    else if (num3 == num1*(pow(razao_pg1, 2)) || num4 == num2*(pow(razao_pg2, 2))){
        printf ("Existe uma PG");
    }
    else {
        printf ("Nao existe nenhum tipo de progressao.");
    }
    getch ();

}
