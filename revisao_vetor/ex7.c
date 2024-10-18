#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 5

int main(){
  int numeros[max], soma=0, mult=1, i;

  srand(time(NULL));
  printf("Conjunto: ");
  for(i=0;i<max;i++){
    numeros[i] = rand()%11;
    soma = soma + numeros[i];
    mult = mult * numeros[i];
    printf("%i ",numeros[i]);
  }
  printf("\n\nSoma = %i\nMultiplicação = %i\n",soma, mult);
  return 0;
}