#include<stdio.h>

int soma(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("Soma de todos os números entre 1 e %i = %i\n",n, soma(n));
}

int soma(int x){
  int soma=0;
  for(int i=2;i<x;i++){
    soma = soma + i;
  }
  return soma;
}