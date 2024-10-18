#include <stdio.h>

int main() {
  float s, h, b, ir, inss, sindicato;
  printf("Digite aqui quanto você ganha por hora: \n");
  scanf("%f",&s);
  printf("Digite aqui quantas horas você trabalha por mês: \n");
  scanf("%f",&h);
  b = (s*h);
  inss = (0.08*b);
  ir = (0.11*b);
  sindicato = (0.05*b);
  printf("Seu salário bruto foi %.2f \n", b);
  printf("Você pagou ao INSS %.2f \n", inss);
  printf("Você pagou ao sindicato %.2f \n", sindicato);
  printf("Você pagou para o imposto de renda %.2f \n", ir);
  printf("Seu salário líquido foi de %.2f \n", b-(inss+ir+sindicato));
  printf("O valor descontado do seu salrio foi de %.2f \n", inss+ir+sindicato);

return 0;
}