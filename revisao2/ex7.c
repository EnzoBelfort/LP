#include<stdio.h>

int main(){
  int n,maior;
  printf("N: ");
  scanf("%i",&n);
  maior = n;

  for(int i=1;i<=4;i++){
    printf("N: ");
    scanf("%i",&n);
    if(n>=maior){
      maior = n;
    }
  }
  printf("O maior número é: %i \n",maior);
}