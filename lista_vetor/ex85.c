#include<stdio.h>
#define MAX 365

int main(){
  int t1,temp[MAX-1], i, maior, menor,contMenor=0;
  float media;

  printf("Temperatura média do 1ºdia: ");
  scanf("%i",&t1);
  maior = t1;
  menor = t1;
  media = t1;
  for(i=0;i<MAX-1;i++){
    printf("Temperatura média do %iºdia: ",i+2);
    scanf("%i",&temp[i]);
    media = media + temp[i];
    if(temp[i]>maior){
      maior = temp[i];
    }
    if(temp[i]<menor){
      menor = temp[i];
    }
  }
  media = media/MAX;
  if(t1<media){
    contMenor++;
  }
  for(i=0;i<MAX-1;i++){
    if(temp[i]<media){
      contMenor++;
    }
  }
  printf("\nMenor temperatura do ano: %i\nMaior Temperatura do ano: %i\nTemperatura média anual: %.1f\nNúmero de dias no ano em que a temperatura foi inferior a média anual: %i\n",menor,maior,media,contMenor);
  return 0;
}