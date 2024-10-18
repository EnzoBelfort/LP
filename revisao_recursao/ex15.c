#include<stdio.h>

void pares(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("Pares: ");
  pares(n);
}

void pares(int n){
  if(n==0){
    printf("0\n");
  }
  else if(n%2==0){
    printf("%i ",n);
    pares(n-2);
  }
  else{
    pares(n-1);
  }
}