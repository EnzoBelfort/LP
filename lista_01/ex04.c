#include <stdio.h>
  int main() {
  float n1, n2, n3, n4, m;
  printf("Digite sua nota do primeiro bimestre: \n");
  scanf("%f",&n1);
  printf("Digite sua nota do primeiro bimestre: \n");             
  scanf("%f",&n2);
  printf("Digite sua nota do terceiro bimestre: \n");
  scanf("%f",&n3);
  printf("Digite sua nota do quarto bimestre: \n");
  scanf("%f",&n4);
  m = ((n1+n2+n3+n4)/4);
  printf("Sua media é %.2f \n", m);
  return 0;
 }