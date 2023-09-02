#include<stdio.h>

main(){

    //Altura de jogador de basquete ou pessoa normal
    float altura;
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    //Operador relacional
    if(altura >= 1.8){
        printf("E jogador de basquete.");

    } else{
        printf("E pessoa normal.");
    }
}