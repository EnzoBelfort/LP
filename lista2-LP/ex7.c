#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 8

int main(){
  int numeros[max][max], i, j;

  srand(time(NULL));
  printf("Matriz: \n");
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      numeros[i][j] = rand()%100;
      printf("%i \t",numeros[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<max-1;i++){
    for(j=i+1;j<max;j++){
      numeros[i][j] = 0;
    }
  }
  printf("\nMatriz com triângulo: \n");
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      printf("%i \t",numeros[i][j]);
    }
    printf("\n");
  }
  return 0;
}