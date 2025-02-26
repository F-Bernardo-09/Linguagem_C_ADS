#include <stdio.h>
#include <conio.h>

const int ordem = 3;

void main (){
    int matriz[ordem][ordem]; int i, k, linha, coluna, maior;
    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf ("Digite um numero: ");
            scanf ("%d", &matriz[i][k]);
        }
    }
    
    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            printf ("%d ", matriz[i][k]);
        }
        printf ("\n");
    }

    for (i = 0; i < ordem; i++){
        for (k = 0; k < ordem; k++){
            maior = matriz[i][k];
            if (maior < matriz [i][k]){
                maior = matriz [i][k];
                linha = i;
                coluna = k;
            }
        }
        printf ("O maior numero da linha %d eh %d, coluna: %d \n", linha, maior, coluna);
    }

    getch();

}
