#include <stdio.h>

main()
{
    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual");
    scanf("%lf", &salarioAtual);

    printf("Digite a porcentagem de reajuste");
    scanf("%lf", &porcentagemReajuste);

reajusteFinal = porcentagemReajuste/100;

//calcular novo salario

novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

printf("Novo salario: R$%.2f",novoSalario);

}
