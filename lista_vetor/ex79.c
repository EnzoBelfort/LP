#include<stdio.h>
#define MAX 20

int main(){
  float notas[MAX],media=0;
  int i,cont=0;
  for(i=0;i<MAX;i++){
    printf("Nota: ");
    scanf("%f",&notas[i]);
    while(notas[i]>10 || notas[i]<0){
      printf("Nota inválida \n");
      printf("Nota: ");
      scanf("%f",&notas[i]);
    }
    media = media + notas[i];
  }
  media = media/MAX;
  for(i=0;i<MAX;i++){
    if(notas[i]>media){
      cont++;
    }
  }
  printf("Media: %.2f\nNúmeros de alunos que tiraram nota maior que a media: %i \n",media,cont);
}