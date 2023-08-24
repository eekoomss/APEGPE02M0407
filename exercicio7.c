#include<stdio.h>

main(){

    /*
    Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
    meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
    Considerar ano com 365 dias e mês com 30 dias.
    */

    //Definindo as variáveis
    int anos, meses, dias, idadeDias;

    //Entrada de dados
    printf("Digite sua idade em anos, meses e dias");
    scanf("%d %d %d", &anos, &meses, &dias);

    //Calculando
    idadeDias = (anos * 365) + (meses * 30) + (dias);

    //Apresentando resultados
    printf("Dias vividos: %d", idadeDias);

}
