#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

int main(){
  int i, numeros[MAX];

  srand(time(NULL));
  printf("Vetor: \n");
  for(i=0;i<MAX;i++){
    numeros[i] = rand()%101;
    printf("%i ",numeros[i]);
  }
  printf("\nVetor ao contrário: \n");
  for(i=MAX-1;i>=0;i--){
    printf("%i ",numeros[i]);
  }
  printf("\n");
  return 0;
}