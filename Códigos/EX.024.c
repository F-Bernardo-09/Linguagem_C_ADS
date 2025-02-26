/* Carlos chegou ao aeroporto para fazer o check-in do seu vôo. Ao entrar na fila de
passageiros, ele percebeu que a empresa aérea tinha 5 guichês para fazer o check-in
dos passageiros, e que estes guichês eram numerados de 1 a 5. Considerando que os
guichês iam começar a realização dos check-ins no exato momento em que Carlos
entrou na fila, e que cada check-in é realizado em exatamente 15 minutos, escreva um
programa que leia um número inteiro positivo que corresponde à posição de Carlos na
fila e determine o número do guichê no qual ele será atendido e o tempo que ele vai
ter que esperar para ser atendido. */

#include <stdio.h>
#include <conio.h>

const int minutos = 15.00;
void main (){
    int posicao;
    printf ("Digite a posicao dentro da fila: ");
    scanf ("%d", &posicao);
    int guiche = ((posicao - 1) % 5) + 1;
    int tempo = minutos * (posicao - 1);
    int tempo_horas = tempo / 60;
    int tempo_minutos = tempo % 60;


    printf ("O numero do guiche que ficara sera, eh: %d\n", guiche);
    printf ("E demorara %d horas e %d minutos para ser atendido...\n", tempo_horas, tempo_minutos);
    getch ();

}
