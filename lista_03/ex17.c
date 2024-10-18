#include<stdio.h>

int main(){
  int n,fat=1;

  printf("N: ");
  scanf("%i",&n);

  while(n<=0){
    printf("Valor inválido. \n");
    printf("Digite um valor válido: ");
    scanf("%i",&n);
  }

  for(int i=n;i>=1;i--){
    fat = fat * i;
  }
  printf("%i! = %i \n",n,fat);
  return 0;
}