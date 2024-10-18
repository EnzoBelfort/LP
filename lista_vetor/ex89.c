#include<stdio.h>
#define MAX 15

int main(){
  int V1[MAX], V2[MAX];
  int i, contIgual=0;

  printf("Primeiro Conjunto: \n");
  for(i=0;i<MAX;i++){
    printf("N: ");
    scanf("%i",&V1[i]);
  }
  printf("\nSegundo Conjunto: \n");
  for(i=0;i<MAX;i++){
    printf("N: ");
    scanf("%i",&V2[i]);
    if(V1[i]==V2[i]){
      contIgual++;
    }
  }
  if(contIgual==0){
    printf("\nNão há números iguais em mesmas posições. \n");
  }
  else if(contIgual==1){
    printf("\nHá 1 número igual na mesma posição dos dois conjuntos.\n");
  }
  else{
    printf("\nHá %i números iguais em mesmas posições nos conjuntos.\n",contIgual);
  }
  return 0;
}