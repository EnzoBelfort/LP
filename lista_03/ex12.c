#include<stdio.h>

int main(void){
  int n;
  printf("Digite um número entre 0 e 10: ");
  scanf("%i",&n);

  while(n>10 || n<0){
    printf("Valor inválido. \n");
    printf("Digite um número entre 0 e 10: ");
    scanf("%i",&n);
  }
  printf("Tabuada de %i: \n",n);
  for(int i=1;i<=10;i++){
    printf("%i x %i = %i \n",n,i,n*i);
  }
  printf("\n");
  return 0;
}