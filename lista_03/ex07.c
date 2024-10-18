#include<stdio.h>

int main(void){
  int n,maior;
  printf("n: ");
  scanf("%i",&n);
  maior=n;

  for(int i=0;i<4;i++){
    printf("n: ");
    scanf("%i",&n);
    if(n>maior){
      maior=n;
    }
  }
  printf("O maior número é %i \n",maior);
}