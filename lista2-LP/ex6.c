#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 5

int main(){
  int numeros[max][max], X, i, j, cont=0;

  printf("Matriz: \n");
  srand(time(NULL));
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      numeros[i][j] = rand()%101;
      printf("%i \t",numeros[i][j]);
    }
    printf("\n");
  }

  printf("Número X: ");
  scanf("%i",&X);

  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      if(X==numeros[i][j]){
        cont++;
      }
    }
  }
  if(cont==0){
    printf("Número %i não encontrado. \n",X);
    return 0;
  }
  else{
    printf("Número %i encontrado nas posições: ",X);
    for(i=0;i<max;i++){
      for(j=0;j<max;j++){
        if(X==numeros[i][j]){
          printf("(%i,%i) ",i,j);
        }
      }
    }
    printf("\n");
    return 0;
  }
}