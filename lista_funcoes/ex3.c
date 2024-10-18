#include<stdio.h>

int potencia(int,int);

int main(){
  int n1, n2;
  printf("Base: ");
  scanf("%i",&n1);
  printf("Expoente: ");
  scanf("%i",&n2);

  printf("Resultado = %i\n", potencia(n1,n2));
}

int potencia(int base, int exp){
  int pot=1;
  if(!exp){
    return 1;
  }
  else{
    for(int i=0;i<exp;i++){
      pot = pot * base;
  }
    return pot;
  }
}