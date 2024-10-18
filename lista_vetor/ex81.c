#include<stdio.h>

int main(){
  float n1, Q[19], menor;
  int i, posicao;
  printf("N: ");
  scanf("%f",&n1);
  while(n1<0){
      printf("Número inválido. \n");
      printf("N: ");
      scanf("%f",&n1);
    } 
  menor = n1;
  posicao = 0;
  for(i=0;i<19;i++){
    printf("N: ");
    scanf("%f",&Q[i]);
    while(Q[i]<0){
      printf("Número inválido. \n");
      printf("N: ");
      scanf("%f",&Q[i]);
    }  
    if(Q[i]<menor){
      menor = Q[i];
      posicao = i + 1;
    }  
  }
  printf("Menor número: %.2f, na posição %i do vetor\n",menor,posicao);
  return 0;
}