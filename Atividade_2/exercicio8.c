#include<stdio.h>

main(){

    /*
    Escreva um algoritmo para ler o salário mensal atual 
    de um funcionário e o percentual de reajuste. Calcular 
    e escrever o valor do novo salário.
    */

    //Definindo as variáveis
    float salarioAtual, porcentagemReajuste, reajusteFinal, novoSalario;

    //Entrada de dados
    printf("Digite o salario atual");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de reajuste");
    scanf("%f", &porcentagemReajuste);

    reajusteFinal = porcentagemReajuste/100;

    //Cálculo do novo salário
    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    //Apresentando o resultado
    printf("Novo salario: %.2f", novoSalario);

}