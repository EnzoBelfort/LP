#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 128

int main(){
  int A[MAX];
  int i, K, cont=0;

  srand(time(NULL));
  printf("\nVetor: ");
  for(i=0;i<MAX;i++){
    A[i] =rand()%101;
    printf("%i \t",A[i]);
  }
  printf("\n\nDigite um número pra procurá-lo no vetor: ");
  scanf("%i",&K);

  for(i=0;i<MAX;i++){
    if(A[i]==K){
      cont = 1;
    }
  }
  if(cont==1){
     printf("Número %i encontrado nas posições: ",K);
    for(i=0;i<MAX;i++){
      if(A[i]==K){
        printf("%i, ",i);
      }
    }
    printf("\n");
  }
  else{
    printf("\nNúmero %i não encontrado no vetor.\n", K);
  }
  return 0;
}