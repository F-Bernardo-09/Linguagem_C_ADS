#include <stdio.h>
#include <conio.h>

void main (){
    int num, soma_par, soma_impar, media_par, media_impar, k1, k2;
    do{
        printf ("Digite um numero: ");
        scanf ("%d", &num);
        if (num != 0 && num%2 == 0){
            soma_par = soma_par + num;
            k1 ++;
        }        if (num != 0 && num%2 != 0){
            soma_impar = soma_impar + num;
            k2 ++;
        }
    }
    while (num != 0);
    if (k1 > 0){
        media_par = soma_par/k1;
        if (media_par > 0 || media_par < 0){
            printf ("A media entre os numeros pares eh: %d", media_par);
        }        
        else if (media_par == 0){
            printf ("A media entre eh zero, mas houve %d digitados", k1);
        }
    }    
    else if (k2 > 0){
        media_impar = soma_impar/k2;
        if (media_impar > 0 || media_impar < 0){
            printf ("A media entre os numeros pares eh: %d", media_impar);
        }        
        else if (media_impar == 0){
            printf ("A media entre eh zero, mas houve %d digitados", k2);
        }
    }
    else{
        printf ("Voce nao digitou nenhum numero");
    }
    getch ();
}
