#include<stdio.h>

int multiplicacao(int, int);

int main(){
  int n3, n4;
  printf("N1: ");
  scanf("%i",&n3);

  printf("N2: ");
  scanf("%i",&n4);

  printf("Resultado: %i \n",multiplicacao(n3,n4));
}

int multiplicacao(int n1, int n2){
  int mult=0;
    for(int i=0; i<n2;i++){
      mult = mult + n1;
    }
  return mult;
}