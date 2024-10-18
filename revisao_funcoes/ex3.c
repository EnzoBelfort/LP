#include<stdio.h>

int pot(int, int);

int main(){
  int x, y;
  printf("Base da potência: ");
  scanf("%i",&x);
  printf("Expoente da potência: ");
  scanf("%i",&y);

  printf("Resultado da potência: %i\n",pot(x,y));
}

int pot(int base, int exp){
  int pot=1;
  for(int i=0;i<exp;i++){
    pot = pot * base;
  }
  return pot;
}