#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int numeros[5];
  int soma=0, fat=1;
  int i;

  srand(time(NULL));
  printf("Números: ");
  for(i=0;i<5;i++){
    numeros[i] = rand()%21;
   
    soma = soma + numeros[i];
    fat = fat * numeros[i];
    printf("%i ",numeros[i]);
  }
  printf("\nSoma = %i \n",soma);
  printf("Multiplicação = %i \n",fat);
  return 0;
}