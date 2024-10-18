#include<stdio.h>

#define MAX 4

int main(){
  float v[4],media,soma=0;
  int i;

  for(i=0;i<MAX;i++){
    printf("Nota %i: ",i+1);
    scanf("%f",&v[i]);
    soma = soma + v[i];
  }
  printf("\n");
  for(i=0;i<MAX;i++){
    printf("Nota %i = %.2f \n",i+1,v[i]);
  }
  media = soma/4;
  printf("Média: %.2f \n",media);
  return 0;
}