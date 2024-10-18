#include<stdio.h>

void reverteint(int);

int main(){
  int n;

  printf("N: ");
  scanf("%i",&n);
  reverteint(n);
  return 0;
}

void reverteint(int n){
  int divisor=1, cont=0, numero[10];
  printf("Número invertido: ");
  if(n==0){
    printf("0");
  }
  while((n/divisor)!=0){
    cont++;
    divisor = divisor * 10;
  }
  for(int i=0;i<cont;i++){
    divisor = divisor / 10;
    numero[i] = n/divisor;
    n = n % divisor;
  }
  for(int i=cont-1;i>=0;i--){
    printf("%i",numero[i]);
  }
  printf("\n");
}