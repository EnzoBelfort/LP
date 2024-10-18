#include<stdio.h>
#define MAX 3

int main(){
  float vendas[MAX], precos[MAX], total[MAX], soma=0;
  int i;

  for(i=0;i<MAX;i++){
    printf("Quantidade vendida da mercadoria %i: ",i+1);
    scanf("%f",&vendas[i]);
    printf("Preço por quantidade da mercadoria %i: ",i+1);
    scanf("%f",&precos[i]);
  }
  for(i=0;i<MAX;i++){
    total[i] = vendas[i]*precos[i];
    soma = soma + total[i];
  }
  printf("\nTotal mensal: %.2f\n",soma);
  return 0;
}