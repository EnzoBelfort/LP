#include<stdio.h>
#define MAX 20

int main(){
  float Q[MAX],maior=0;
  int i,posicao;
  for(i=0;i<MAX;i++){
    printf("Digite um número positivo: ");
    scanf("%f",&Q[i]);
    while(Q[i]<0){
      printf("Número inválido: \n");
      printf("Número: ");
      scanf("%f",&Q[i]);
    }
    if(Q[i]>maior){
      maior = Q[i];
      posicao = i;
    }
  }
  printf("Maior número: %.2f, na posição %i do vetor \n",maior,posicao);
  return 0;
}