#include<stdio.h>

int main(){
  int n,centenas,dezenas,unidades;
  printf("N: ");
  scanf("%i",&n);

  while(n>=1000 || n<0){
    printf("Número inválido \n");
    printf("N: ");
    scanf("%i",&n);
  }
  centenas = n/100;
  dezenas = (n%100)/10;
  unidades = n%10;

  if(centenas==0){
    if(dezenas==0){
    printf("%i = %i unidades \n",n,unidades);
  }
  else{
    printf("%i = %i dezenas e %i unidades \n",n,dezenas,unidades);
  }
 }
  else{
    printf("%i = %i centenas, %i dezenas e %i unidades \n",n,centenas,dezenas,unidades);
  }
  return 0;
}