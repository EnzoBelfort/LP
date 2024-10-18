#include<stdio.h>
#define max 5

int main(){
  float altura[max];
  int idade[max], i;

  for(i=0;i<max;i++){
    printf("Idade da %iªpessoa: ",i+1);
    scanf("%i",&idade[i]);
    printf("Altura da %iªpessoa: ",i+1);
    scanf("%f",&altura[i]);
  }
  for(i=max-1;i>=0;i--){
    printf("\nAltura da %iªpessoa: %.2f\n",i+1, altura[i]);
    printf("Idade da %iªpessoa: %i\n",i+1, idade[i]);
  }
  return 0;
}