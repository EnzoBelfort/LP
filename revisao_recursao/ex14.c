#include<stdio.h>

void pares(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("Pares: ");
  pares(n);
  printf("\n");
  return 0;
}

void pares(int n){
  if(n==0){
    printf("0 ");
  }
  else{
    if(n%2==0){
      pares(n-2);
      printf("%i ",n);
    }
    else{
      pares(n-1);
    }
  }
}