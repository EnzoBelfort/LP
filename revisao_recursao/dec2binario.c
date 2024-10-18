#include<stdio.h>

void dec2binario(int);

int main(){
  int n;
  printf("Número na base decimal: ");
  scanf("%i",&n);
  dec2binario(n);
  printf("\n");
}

void dec2binario(int n){
  if(n==0){
    printf("0");
  }
  else{
    if(n%2==0){
      dec2binario(n/2);
      printf("0");
    }
    else{
      dec2binario(n/2);
      printf("1");
    }
  }
}