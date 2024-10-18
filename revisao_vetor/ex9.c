#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10

int main(){
  int A[max], i, soma=0;

  srand(time(NULL));
  for(i=0;i<max;i++){
    A[i] = rand()%11;
    soma = soma + (A[i]*A[i]);
    printf("%i ",A[i]);
  }
  printf("\n\nSoma dos elementos: %i\n",soma);
  return 0;
}