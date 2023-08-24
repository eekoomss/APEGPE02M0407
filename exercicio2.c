#include<stdio.h>

main(){

    /*
    Escreva um programa que receba um número 
    qualquer e mostre o seu dobro.
    */

   //Definindo as variáveis
   int num, dobro;

   //Entrada de dados
   printf("Digite o numero");
   scanf("%d", &num);

   //Operações
   dobro = num * 2;

   //Apresentando resultados
   printf("\nO dobro e: %d", dobro);

}