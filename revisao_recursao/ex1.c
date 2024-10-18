#include<stdio.h>

int fatorial(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("%i! = %i\n",n,fatorial(n));
}

int fatorial(int n){
  if(n==1 || n==0){
    return 1;
  }
  else{
    return n * fatorial(n-1);
  }
}