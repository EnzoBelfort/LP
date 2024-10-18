#include<stdio.h>

int somaInteiros(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);

  printf("Soma de todos os inteiros entre 1 e %i = %i\n",n,somaInteiros(n));
}

int somaInteiros(int x){
  int soma=0;
  for(int i=2;i<x;i++){
    soma = soma + i;
  }
  
  return soma;
}