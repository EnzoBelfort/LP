#include<stdio.h>

int main(){

  float n1,n2,media;
  printf("Digite sua primeira nota: ");
  scanf("%f",&n1);
  
  while(n1>10 || n1<0){
    printf("Número inválido \n");
    printf("Digite sua primeira nota: ");
    scanf("%f",&n1);
  }
  
  printf("Digite sua segunda nota: ");
  scanf("%f",&n2);

  while(n2>10 || n2<0){
    printf("Número inválido \n");
    printf("Digite sua segunda nota: ");
    scanf("%f",&n2);
  }
  
  media = (n1+n2)/2;

  if(media==10){
    printf("Aprovado com Distinção \n");
  }
  else{
    if(media>=7){
    printf("Aprovado. \n");
    }
    else{
      printf("Reprovado. \n");
    }
  }
  return 0;
}