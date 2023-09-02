#include<stdio.h>

main(){

    //Peso 
    int peso;
    printf("Digite aqui o seu peso: ");
    scanf("%d", &peso);

    //Operador relacional
    if(peso <= 60){
        printf("Magrelo.");

    } else{
        printf("Gordinho.");
    }
}