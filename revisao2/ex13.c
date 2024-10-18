#include<stdio.h>

int main(){
  int base,exp,pot=1;
  printf("Digite a base: ");
  scanf("%i",&base);
  printf("Digite o expoente da base: ");
  scanf("%i",&exp);

  for(int i=0;i<exp;i++){
    pot = pot * base;
  }
  printf("%i^%i = %i \n",base,exp,pot);
  return 0;
}