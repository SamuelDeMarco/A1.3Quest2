#include <stdio.h>
#include <stdlib.h>

int a1, a2, a3, maior, tempo, igual;

int main(void) {
  
  printf("Digite a quantida de funcionários no 1°andar: \n");
  scanf("%d", &a1);
  while(a1 < 0 || a1 > 1000)
    {
      printf("Valor digitado fora do padrão! \n");
      printf("Digite a quantida de funcionários no 1°andar: \n");
      scanf("%d", &a1);
    }
  
  printf("Digite a quantida de funcionários no 2°andar: \n");
  scanf("%d", &a2);
  while(a2 < 0 || a2 > 1000)
    {
      printf("Valor digitado fora do padrão! \n");
      printf("Digite a quantida de funcionários no 2°andar: \n");
      scanf("%d", &a2);
    }
  
  printf("Digite a quantida de funcionários no 3°andar: \n");
  scanf("%d", &a3);
  while(a3 < 0 || a3 > 1000)
  {
    printf("Valor digitado fora do padrão! \n");
    printf("Digite a quantida de funcionários no 3°andar: \n");
    scanf("%d", &a3);
  }
  
  maior = a1;
  if(a2 > maior)
  {
    maior = a2;
  }
  if(a3 > maior)
  {
    maior = a3;
  }
  
// Verificando se o 2° andar é igual ao primeiro ou ao terceiro
  
  if(a2 == maior)
  {
  maior = a2; 
  igual = 1;
  }
//  Teste para verificar qual número é o maior
//  printf("\nO maior número de funcionário é : %d \n", maior);

if(a1 == maior && igual != 1)
{
  tempo = (a2 * 2) + (a3 * 4);  
}
  else if(a2 == maior && igual == 1)
  {
    tempo = (a1 * 2) + (a3 * 2);
  }
  else if(a3 == maior && igual != 1)
  {
    tempo = (a1 * 4) + (a2 * 2);
  }
  system("clear");
  
  printf("O tempo necessário para tomar café é de: %d minutos.", tempo);
  
  return 0;
}