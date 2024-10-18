#include<stdio.h>

int divisao(int,int);

int main(){
  int n1, n2;
  printf("Numerador: ");
  scanf("%i",&n1);
  printf("Denominador: ");
  scanf("%i",&n2);

  printf("Resultado = %i\n", divisao(n1,n2));
}

int divisao(int n, int d){
  int resultado=n, cont=0;
  while(resultado>0){
    resultado = resultado - d;
    if(resultado>=0){
      cont++;
    }
  }
  return cont;
}