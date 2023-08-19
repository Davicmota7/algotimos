#include <stdio.h>

int main(int argc, char const *argv[])
{
    
  int anos, meses, dias, idadeDias;
  printf("Digite sua idade em anos, mesesnendias:");
  scanf("%d %d %d", &anos, &meses, &dias);

  idadeDias = (anos* 365) + (meses *30) + (dias);
printf ("Dias vividos: %d", idadeDias);

}
