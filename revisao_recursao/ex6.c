#include<stdio.h>

int potencia(int, int);

int main(){
  int base, exp;
  printf("Base: ");
  scanf("%i",&base);
  printf("Expoente: ");
  scanf("%i",&exp);
  printf("%i^%i = %i\n",base,exp,potencia(base,exp));
}

int potencia(int k, int n){
  if(n==0){
    return 1;
  }
  else if(n==1){
    return k;
  }
  else{
    return k * potencia(k,n-1);
  }
}