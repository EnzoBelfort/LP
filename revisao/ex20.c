#include<stdio.h>

int main(){
  float n1,n2,n3,media;
  printf("N1: ");
  scanf("%f",&n1);
  printf("N2: ");
  scanf("%f",&n2);
  printf("N3: ");
  scanf("%f",&n3);

  media = (n1+n2+n3)/3;

  if(media==10){
    printf("Media final: %.1f. Aprovado com distição \n",media);
  }
  else if(media>=7){
    printf("Média final: %.1f. Aprovado \n",media);
  }
  else{
    printf("Média final: %.1f. Reprovado \n",media);
  }
  return 0;
}