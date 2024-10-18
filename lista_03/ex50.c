#include<stdio.h>

int main(){
  float n,H,soma=0;
  printf("N: ");
  scanf("%f",&n);

  while(n<=0){
    printf("Número inválido \n");
    printf("N: ");
    scanf("%f",&n);
  }
  for(float i=1;i<=n;i++){
    H = 1/i;
    soma = soma + H;
  }
  printf("H = %.2f \n",soma);
}