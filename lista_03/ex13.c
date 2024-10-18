#include<stdio.h>

int main(void){
  int base,expoente, pot=1;
  printf("Base: ");
  scanf("%i",&base);
  printf("Expoente: ");
  scanf("%i",&expoente);

  for(int i=0;i<=expoente;i++){
    pot = pot*base;
  }
  printf("Resultado: %i \n",pot);

  return 0;
}