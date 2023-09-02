#include<stdio.h>

main(){

    //Leia a idade e imprima se a pessoa é maior
    int idade;

    printf("Digite sua idade");
    scanf("%d", &idade);

    //Estrutura condicional
    if(idade >= 18){
        printf("E maior de idade");
    } else {
        printf("Menor de idade");
    }
}