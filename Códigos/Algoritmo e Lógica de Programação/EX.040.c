/*

Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para 
cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade 
comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja 
adicionar um novo item ou fechar a conta. O programa deve considerar que o 
usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve 
mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo 
corresponde à soma do valor total de cada item digitado pelo usuário. O valor da 
conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

const float desconto = 0.15;

void main (){
    float custo = 0, preco_produto;
    int quant, pagamento;
    char nome_produto[20]; 
    char itens[3];

    do {
        printf ("Nome do produto: ");
        scanf ("%s", nome_produto);

        printf ("Qual o preco: ");
        scanf ("%f", &preco_produto);

        printf ("Quantidade: ");
        scanf ("%d", &quant);

        custo = (preco_produto * quant) + custo;

        printf (" \n");

        printf ("Deseja comprar mais itens[S/N]: ");
        scanf ("%s", itens);
        printf (" \n");
    }
    //while (itens != 'N');
    while (strcmp(itens, "S") == 0 || strcmp(itens, "s") == 0);
    
    printf ("OPCAO DE PAGAMENTO:\n");
    printf ("[1] A vista \n[2] A prazo\n");
    printf ("Informe o metodo de pagamento: ");
    scanf ("%d", &pagamento);

    if (pagamento == 1){
        float custo_novo = custo - (custo*desconto);
        printf ("CUSTO TOTAL: %.2f", custo_novo);
    }
    else if (pagamento == 2){
        printf ("CUSTO TOTAL: %.2f", custo);
    }
    else{
        printf ("Forma de Pagamento Invalido");
    }
    getch ();
}
