#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main()
{
int NUM;
printf("\nInforme o numero: ");
scanf("%d",&NUM);
if (NUM>0)
 printf("\nA raiz quadrada e:%2.2f",sqrt(NUM));
else
printf("\nO quadrado do numero e:%2.2f",pow(NUM,2));
printf("\n\n");

}