#include <stdio.h>

int main() {
  float F, C;
  printf("Qual a temperatura ambiente em Fahrenheit: ");
  scanf("%f",&F);
  C = 5 * ((F-32) / 9);
  printf("A temperatura ambiente em graus celsius é %.2f \n",C);
  return 0;
}