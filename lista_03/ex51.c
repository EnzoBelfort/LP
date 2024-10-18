#include<stdio.h>

int main(){
  float n,m=1,soma=0;
  printf("N: ");
  scanf("%f",&n);

  while(n<=0){
    printf("Número inválido \n");
    printf("N: ");
    scanf("%f",&n);
  }
  for(float i=1;i<=n;i++){
    soma = soma + i/m;
    m = i + 2;
  }
  printf("S: %f \n",soma);
  return 0;
}