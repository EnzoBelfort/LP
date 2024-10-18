#include<stdio.h>
#define max 4

int main(){
  int notas[max], i;
  float soma=0;

  for(i=0;i<max;i++){
    printf("Nota %i: ",i+1);
    scanf("%i",&notas[i]);
    soma = soma + notas[i];
  }
  printf("\nNotas: ");
  for(i=0;i<max;i++){
    printf("%i. ",notas[i]);
  }
  printf("\nMédia: %.2f\n",soma/max);
  return 0;
}