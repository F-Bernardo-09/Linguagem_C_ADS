#include <stdio.h>
#include <conio.h>

void asteristico (int atual, int quantidade){
    int k = 0;
    if (atual > quantidade){
        return;
    }

    for (k = quantidade; k >= atual; k--){
        printf ("*");
    }

    printf ("\n");
    return asteristico (atual +1, quantidade);
}

void main (){
    int quant = 0;
    printf ("Quantidade de asteristicos: ");
    scanf ("%d", &quant);
    asteristico (1, quant);
    getch ();
}
