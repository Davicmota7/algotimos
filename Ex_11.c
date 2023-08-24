#include <stdio.h>

main() {

    float salario_fixo, comissao, venda, salario_total;

    printf("Digite o valor total das vendas : ");
    scanf("%f",&venda);

    salario_fixo = 800;
    comissao = (venda * 5) / 100;
    salario_total = salario_fixo + comissao;

    printf("\nSeu sálario total é : %f", salario_total);
    printf("\nSeu total de vendas foi de : %f", venda);
    printf("\nSua comissão foi de : %f", comissao);
}