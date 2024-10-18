#include<stdio.h>

int tribonacci(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  printf("%iº termo da sequência de tribonacci: %i\n",n, tribonacci(n));
}

int tribonacci(int n){
  if(n==1 || n==2){
    return 0;
  }
  else if(n==3){
    return 1;
  }
  else{
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
  }
}