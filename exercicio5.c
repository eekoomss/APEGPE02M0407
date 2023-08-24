#include<stdio.h>

main(){

    /*
    Faça um programa em que o usuário digite o custo de uma determinada 
    mercadoria, em seguida, adiciona-se ao custo o valor do frete e 
    despesas eventuais (também solicitadas pelo teclado). Para concluir, 
    o programa pergunta qual o valor de venda e indica a porcentagem de
    lucro da mercadoria.
    */

    //Definindo as variáveis
    float custo, frete, despesas, valorBruto, valorVenda, lucro;

    //Entrada de dados
    printf("\nDigite o custo do produto");
    scanf("%f", &custo);

    printf("\nDigite o frete do produto");
    scanf("%f", &frete);

    printf("\nDigite as despesas do produto");
    scanf("%f", &despesas);

    //Operações
    //Valor bruto = custo + frete + despesas
    valorBruto = custo + frete + despesas;

    //Informando ao usuário o Valor Bruto
    printf("O valor bruto do produto e: R$%.2f. Digite o valor da venda: ", valorBruto);
    scanf("%f", &valorVenda);

    //Porcentagem de lucro
    lucro = ((valorVenda - valorBruto) * 100) / valorBruto;

    //Informando o lucro
    printf("Sua porcentagem de lucro e: %.2f%%", lucro);

}




    