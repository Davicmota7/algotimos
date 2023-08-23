#include <stdio.h>

main()
{

float custo, frete, despesa, valorBruto, valorVenda, lucro;


printf("Digite o custo do produto");
scanf("%f", &custo);

printf("Digite o frete do produto");
scanf("%f", &frete);

printf("Digite a despesa do produto");
scanf("%f", &despesa);

valorBruto = custo + frete + despesa;

//informar o valor bruto para o usuario

printf("O valor bruto do formato e: R$%.2f. Digite o valor da venda, :", &valorBruto);
scanf("%f", &valorVenda);

//calculo do lucro


lucro = (valorVenda - valorBruto)*100/valorBruto;

//apresentacao do lucro

printf("Sua porcentagem de lucro e; %.2f%%", lucro);


}
    
