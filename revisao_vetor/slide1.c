#include<stdio.h>
#define MAX 10

int main(){
  int R[MAX], S[MAX], Y[MAX];
  int i, soma=0;

  for(i=0;i<MAX;i++){
    printf("Digite o %iº valor para o conjunto R: ",i+1);
    scanf("%i",&R[i]);

    printf("Digite o %iº valor para o conjunto S: ",i+1);
    scanf("%i",&S[i]);
    soma = soma + R[i] + S[i];
    Y[i] = R[i] * S[i];
  }
  printf("\nVetor X: ");
  for(i=0;i<MAX;i++){
    printf("%i, %i, ",R[i], S[i]);
  }
  printf("\nVetor Y: ");
  for(i=0;i<MAX;i++){
    printf("%i, ",Y[i]);
  }
  printf("\nSoma total: %i\n",soma);
  printf("\n");
  return 0;
}