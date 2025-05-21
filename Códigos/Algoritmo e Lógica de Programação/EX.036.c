// Calculando Delta e Bhaskara da equação do segundo grau

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
    float termo_a, termo_b, termo_c, x1, x2, delta;

    printf ("Ola, apenas uma orientacao, caso o termo na equacao do segundo grau nao exista, digite: 0.\n");
    printf ("Digite o termo A:\n");
    scanf ("%f", &termo_a);
    printf ("Digite o termo B:\n");
    scanf ("%f", &termo_b);
    printf ("Digite o termo C:\n");
    scanf ("%f", &termo_c);

    delta = pow (termo_b, 2) - 4*termo_a*termo_c;

    if (termo_a == 0){
        printf ("O termo A nao pode ser zero, pois sendo, nao eh uma equacao do segundo grau");
    }
    
    else if (delta>0){
        x1 = (-termo_b + sqrt (delta)) / (2*termo_a);
        x2 = (-termo_b - sqrt (delta)) / (2*termo_a);
        printf ("Seu x1 %.2f sera e x2 eh %.2f", x1, x2);
    }

    else if (delta == 0){
        x1 = -termo_b / (2*termo_a);
        printf ("Seu x1 %.2f", x1);
    }

    else {
        printf ("O delta nao existe, logo, nao tem x1 e x2.");
    }

    getch ();
}
