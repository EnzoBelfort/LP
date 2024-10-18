#include<stdio.h>

int main(){
  int ano;
  printf("Digite um ano: ");
  scanf("%i",&ano);

  if(ano%4==0){
    printf("Esse ano é bissexto. \n");
  }
  else{
    printf("Esse ano não é bissexto. \n");
  }
  return 0;
}