#include <stdio.h>

 main(int argc, char const *argv[])
{
    /* code */
    float reais, cotacaoDolar, valorDolar;

printf("Digite o valor em reais");
scanf("%f", &reais);

printf("Digite a cotacao do dolar");
scanf("%f", &cotacaoDolar);

valorDolar = reais/cotacaoDolar;

printf("O valor em dolar e: %.2f", valorDolar);

}
