#include<stdio.h>

int main(){
  int n;
  printf("n: ");
  scanf("%i",&n);

  while(n<0 || n>=1000){
    printf("Número inválido \n");
    printf("N: ");
    scanf("%i",&n);
  }
  printf("%i = %i centenas, %i dezenas e %i unidades \n", n,n/100,(n%100)/10,n%10);
}