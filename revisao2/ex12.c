#include<stdio.h>

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);

  while(n<1 || n>10){
    printf("Valor inválido. \n");
    printf("N: ");
    scanf("%i",&n);
  }
  printf("Tabuada do %i: \n",n);
  for(int i=1;i<=10;i++){
    printf("%i X %i = %i \n",n,i,n*i);
  }
  return 0;
}