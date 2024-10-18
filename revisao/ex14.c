#include<stdio.h>

int main(){
  float n1,n2,media;
  char conceito;
  printf("N1: ");
  scanf("%f",&n1);
  printf("N2: ");
  scanf("%f",&n2);

  media=(n1+n2)/2;

  if(media>9 && media<=10){
    conceito='A';
  }
  else if(media>7.5 && media<=9){
    conceito='B';
  }
  else if(media>6 && media<=7.5){
    conceito='C';
  }
  else if(media>4 && media<=6){
    conceito='D';
  }
  else{
    conceito='E';
  }
  if(conceito=='A' || conceito=='B' || conceito=='C'){
    printf(" N1: %.1f \n N2: %.1f \n Média: %.2f \n Conceito: %c \n Aprovado. \n",n1,n2,media,conceito);
  }
  else{
    printf(" N1: %.1f \n N2: %.1f \n Média: %.2f \n Conceito: %c \n Reprovado. \n",n1,n2,media,conceito);
  }
  return 0;
}