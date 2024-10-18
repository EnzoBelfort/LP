#include<stdio.h>

int primo(int);

int main(){
  int numero;
  printf("N: ");
  scanf("%i",&numero);
  if(primo(numero)==1){
    printf("O %i é primo.\n",numero);
  }
  else{
    printf("O %i não é primo.\n",numero);
  }
}

int primo(int x){
  if(x==1 || x==0){
    return 0;
  }
  for(int i=2;i<x;i++){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}