#include<stdio.h>

int main(){
  int n, soma=0,media;

  for(int i=1;i<=5;i++){
    printf("N: ");
    scanf("%i",&n);
    soma = soma + n;
  }
  media = soma/5;
  printf("A soma dos números é: %i.\nA média dos números é: %i.\n",soma,media);
  return 0;
}