#include<stdio.h>

main()
{
    char nome[40];
    int idade;
    char matricula[20];
    char endereco[30];
    char curso[20];
    int periodo;
    char disciplinas[100];
    float mensalidade;

printf("\nNome: \n");
fgets(nome, 40, stdin);

printf("\nIdade: \n");
scanf("%d", &idade);

printf("\nMatricula: \n");
fgets(matricula, 20, stdin);

printf("\nEndereco: \n");
fgets(endereco, 30, stdin);

printf("\nCurso: \n");
fgets(curso, 20, stdin);

printf("\nPeriodo: \n");
scanf("%d", &periodo);

printf("\nDisciplinas: \n");
fgets(disciplinas, 100, stdin);

printf("\nMensalidade: \n");
scanf("%f", &mensalidade);

printf("_______________")
printf("Dados registrados")
printf("_______________")

printf("Nome: %s", nome);
printf("Idade: %d", idade);
printf("Matricula: %s", matricula);
printf("Endereco: %s", endereco);
printf("Curso: %s", curso);
printf("Periodo: %d", periodo);
printf("Disciplinas: %s", disciplinas);
printf("Mensalidade: %f", mensalidade);

}


