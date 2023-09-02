#include<stdio.h>

main(){

    /*
    Escreva um programa que pergunte qual o 
    raio de um círculo e imprima a sua área.
    */

    //Definindo as variáveis
    double raio, area, PI = 3.1415;
    
    //Entrada de dados
    printf("Digite o valor do raio");
    scanf("%lf", &raio);
    
    //Calculo da área do círculo
    area = PI * (raio * raio);

    //Apresentando resultados
    printf("A area do circulo e: %.2lf", area);

}
