#include<stdio.h>

int primo(int);
int nprimos(int, int);

int main(){
  int x, y;
  printf("N1: ");
  scanf("%i",&x);
  printf("N2: ");
  scanf("%i",&y);
  while(y<x){
    printf("N2 precisa ser maior que N1.\n");
    printf("N2: ");
    scanf("%i",&y);
  }
  printf("%i primos entre %i e %i.\n",nprimos(x,y), x, y);
  return 0;
}

int primo(int n){
  if(n==1 || n==0){
    return 0;
  }
  for(int i=2;i<n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

int nprimos(int x, int y){
  int cont=0;
  for(int i=x+1;i<y;i++){
    if(primo(i)==1){
      cont++;
    }
  }
  return cont;
}