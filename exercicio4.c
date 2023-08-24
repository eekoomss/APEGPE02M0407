#include<stdio.h>

main(){

    /*
    Dado um valor em reais e a cotação do 
    dólar, converta esse valor para dólares.
    */

    //Definindo as variáveis
    float reais, cotacaoDolar, valorDolar;

    //Entrada de dados
    printf("Digite o valor em reais");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar");
    scanf("%f", &cotacaoDolar);

    //Operações
    valorDolar = reais / cotacaoDolar;

    //Mostrando resultados
    printf("O valor em dolar e: %.2f", valorDolar);

}