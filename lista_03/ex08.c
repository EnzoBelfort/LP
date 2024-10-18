#include<stdio.h>

int main(void){
  int n,soma=0;

  for(int i=0;i<5;i++){
    printf("n: ");
    scanf("%i",&n);
    soma = soma + n;
  }
  printf("A soma é %i \n",soma);
  printf("Média: %.2f \n", (float)soma/5);

  return 0;
}