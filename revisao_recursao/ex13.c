#include<stdio.h>

void naturais(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  naturais(n);
  printf("\n");
  return 0;
}

void naturais(int n){
  if(n==0){
    printf("0");
  }
  else{
    printf("%i, ",n);
    naturais(n-1);
  }
}