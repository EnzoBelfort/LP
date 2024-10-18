#include<stdio.h>

int soma(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("O somatório de todos os números de 1 a %i é %i.\n",n,soma(n));
  return 0;
}

int soma(int n){
  if(n==1){
    return 1;
  }
  else{
    return n + soma(n-1);
  }
}