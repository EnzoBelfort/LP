#include<stdio.h>
#define MAX 10

int main(){
  int A[MAX];
  int i, X;
  int M[MAX];
  for(i=0;i<MAX;i++){
    printf("N: ");
    scanf("%i",&A[i]);
  }
  printf("Digite um fator para multiplicar os termos: ");
  scanf("%i",&X);
  printf("Números multiplicados por X: ");
  for(i=0;i<MAX;i++){
    M[i] = A[i] * X;
    printf("%i, ",M[i]);
  }
  printf("\n");
  return 0;
}