#include<stdio.h>

main(){

    /*
    Dadas as medidas de uma sala, 
    informe sua área.
    */

    //Definindo as variáveis
    float largura, comprimento, area;

    //Entrada de dados
    printf("Digite a largura");
    scanf("%f", &largura);

    printf("Digite o segundo numero");
    scanf("%f", &comprimento);

    //Calculo da área
    area = largura * comprimento;

    //Apresentadno resultados
    printf("\nA area da sala e: %.3fm2", area);

}