#include<stdio.h>

int quadrado(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("O menor inteiro positivo cujo quadrado é superior a %i é %i\n",n,quadrado(n));
  return 0;
}

int quadrado(int x){
  int i=0;
  while(i*i<=x){
    i++;
  }
  return i;
}