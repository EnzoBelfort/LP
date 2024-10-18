#include<stdio.h>

int fatorial(int);

int main(){
  int x;
  printf("N: ");
  scanf("%i",&x);
  printf("%i! = %i\n",x,fatorial(x));
}

int fatorial(int x){
  int fat=1;
  for(int i=x;i>0;i--){
    fat = fat * i;
  }
  return fat;
}