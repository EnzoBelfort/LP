#include <stdio.h>

int main() 
{
  float s, h, t;
  printf("Digite aqui quanto você ganha por hora: \n");
  scanf("%f",&s);
  printf("Digite aqui quantas horas você trabalha por mês: \n");
  scanf("%f",&h);
  t = (s*h);
  printf("O seu salário mensal é %.2f \n", t);

  return 0;
}