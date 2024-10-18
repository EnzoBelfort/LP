#include<stdio.h>

#define MAX 10

int main(){
  int numeros[MAX];
  int i,soma = 0;
  for(i=0;i<MAX;i++){
    printf("Digite um número: ");
    scanf("%i",&numeros[i]);
    soma = soma + (numeros[i]*numeros[i]);
  }
  printf("A soma é %i \n",soma);
  return 0;
}