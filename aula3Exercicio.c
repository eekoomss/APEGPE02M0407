#include<stdio.h>

main(){

    //Primeiro passo
    char nome [50];
    int idade;
    char matricula [20];
    char endereco [60];
    char curso [40];
    int periodo;
    char disciplinas [100];

    //Segundo passo
    printf("_______________________");
    printf("Cadastro de Aluno");
    printf("_______________________");

    printf("\nNome: \n");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("\nIdade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nMatricula: ");
    fgets(matricula, 20, stdin);
    fflush(stdin);

    printf("\nEndereco: ");
    fgets(endereco, 60, stdin);
    fflush(stdin);

    printf("\nCurso: ");
    fgets(curso, 40, stdin);
    fflush(stdin);

    printf("\nPeriodo: ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDisciplinas: ");
    fgets(disciplinas, 100, stdin);
    fflush(stdin);

    //Terceiro passo
    printf("_______________________");
    printf("Dados Registrados");
    printf("_______________________");

    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %d", periodo);
    printf("\nDiscplinas: %s", disciplinas);

}