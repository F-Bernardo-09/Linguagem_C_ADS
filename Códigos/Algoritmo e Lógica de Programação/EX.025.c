/*Um provedor de internet oferece um plano promocional para os seus clientes. Neste
plano, ele paga uma mensalidade de R$ 80,00 e pode acessar até 100 GB de dados.
Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma
taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informações,
escreva um programa que leia a quantidade de dados acessados pelo cliente durante
um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade
nunca é inferior a 100 GB.*/

#include <stdio.h>
#include <conio.h>

void main (){
    float consumo_GB;
    printf ("Quantos GB consumiu neste mes? ");
    scanf ("%f", &consumo_GB);
    float custo_extra = 5.00*(consumo_GB - 100.00);
    float custo_total = custo_extra + 80.00;

    printf ("O custo extra sera %.2f reais e o custo total R$ %.2f", custo_extra, custo_total);
    getch ();

}
