#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int A[3][5], B[3][5], soma[3][5], i, j, soma1=0, soma2=0;

  srand(time(NULL));
  printf("Matriz A: \n");
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      A[i][j] = rand()%21;
      soma1 = soma1 + A[i][j];
      printf("%i\t",A[i][j]);
    }
    printf("\n");
  }
  
  printf("\nMatriz B: \n");
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      B[i][j] = rand()%21;
      soma2 = soma2 + B[i][j];
      printf("%i\t",B[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz soma:\n");
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      soma[i][j] = A[i][j] + B[i][j];
      printf("%i\t",soma[i][j]);
    }
    printf("\n");
  }
  printf("\nSoma total: %i\n",soma1+soma2);
  return 0;
}