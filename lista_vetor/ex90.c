#include<stdio.h>
#define MAX 5

int main(){
  int numeros[MAX], i, contIgual=0, X;

  printf("Conjunto\n");
  for(i=0;i<MAX;i++){
    printf("N: ");
    scanf("%i",&numeros[i]);
  }
  printf("\nNúmero a ser comparado com o conjunto: ");
  scanf("%i",&X);
  for(i=0;i<MAX;i++){
    if(numeros[i]==X){
      contIgual++;
    }
  }
  if(contIgual==0){
    printf("\nO número %i não aparece no conjunto. \n",X);
  }
  else if(contIgual==1){
    printf("\nO número %i aparece uma vez no conjunto. \n",X);
  }
  else{
    printf("\nO número %i aparece %i vezes no conjunto. \n",X,contIgual);
  }
  return 0;
}