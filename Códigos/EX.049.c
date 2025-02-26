#include <stdio.h>
#include <conio.h>

const int tamanho = 3;

void main (){
    char gabarito[tamanho], respostas[tamanho]; int k; int acertos = 0;
    for (k = 0; k < tamanho; k++ ){
        printf ("Digite a alternativa correta: ");
        scanf (" %c", gabarito[k]);
    }

    for (k = 0; k < tamanho; k++ ){
        printf ("Digite a alternativa do aluno: ");
        scanf (" %c", &respostas[k]);
    }
    
    for (k = 0; k < tamanho; k++ ){
        if (gabarito[k] == respostas[k]){
            acertos += 1;
        }
    }

    printf ("O numero de acertos foi: %d", acertos);
    getch();

}
