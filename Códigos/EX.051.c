/*
Escreva um programa em C que leia um número inteiro N e um número inteiro positivo
k e identifique o k-ésimo algarismo do número N (da direita para a esquerda). A
verificação deve ser feita por meio de um subprograma recursivo, que deve receber
como parâmetros o número inteiro N e a posição K a ser verificada. Caso o valor de k
seja maior do que o número de algarismos do número N, a resposta deve ser 0.
*/

#include <stdio.h>
#include <conio.h>

int ordem (int num, int posicao){
    if (posicao == 0){
        return num % 10;
    }

    return ordem(num/10, posicao -1);
}

void main (){
    int numero, posicao = 0;
    printf ("Digite um numero: ");
    scanf ("%d", &numero);
    printf ("Digite a posicao que deseja verificar: ");
    scanf ("%d", &posicao);
    printf ("%d", ordem (numero, posicao));
    getch();

}
