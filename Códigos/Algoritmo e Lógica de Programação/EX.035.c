/* Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e 
calcule o percentual de mulheres que tem entre 18 e 21 anos */

#include <stdio.h>
#include <conio.h>
#include <string.h>

const int num_pessoas = 3;

void main(){
    int k, idade; 
    float percentual =0, contagem = 0;
    char nome[20];
    char sexo;

    for (k = 1; k <= num_pessoas; k++){
        fflush (stdin);
        printf ("ENTREVISTA %d \n", k);

        printf("Digite seu nome: ");
        scanf ("%s", nome);

        printf("Digite seu sexo [M/F]: ");
        scanf ("%c", sexo);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf ("\n");

        if (sexo == 'F'  || sexo == 'f'){
            if (idade >= 18 && idade <= 21){
                contagem ++; 
            }
        }
    } 

    percentual = (contagem / num_pessoas) * 100;
    printf("O percentual de mulheres entre 18 e 21 anos eh: %.2f \n", percentual);
    getch ();
}
