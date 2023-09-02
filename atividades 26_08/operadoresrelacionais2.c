#include<stdio.h>

main(){

    //Leia se o salário é maior que o minimo
    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    //Operador relaacional
    if(salario >= 1320){
        printf("E maior que o minimo");
    } else{
        printf("E bolsa familia");
    }
}