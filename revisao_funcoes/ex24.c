#include<stdio.h>

int fat(int);
int combinacao(int, int);

int main(){
  int n, r;
  printf("N: ");
  scanf("%i",&n);
  printf("R: ");
  scanf("%i",&r);

  printf("Combinação = %i\n",combinacao(n,r));
}

int fat(int x){
  int fat=1;
  for(int i=x;i>0;i--){
    fat = fat * i;
  }
  return fat;
}

int combinacao(int n, int r){
  int c;
  c = fat(n)/(fat(n-r)*fat(r));
  return c;
}