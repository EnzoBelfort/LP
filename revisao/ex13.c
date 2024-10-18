#include<stdio.h>

int main(){
  int dia;
  printf("Digite o dia da semana como número: ");
  scanf("%i",&dia);

  //poderia ser um while também
  if(dia<=0 || dia>7){
    printf("Valor inválido \n");
  }
  else if(dia==1){
    printf("Domingo. \n");
  }
  else if(dia==2){
    printf("Segunda. \n");
  }
  else if(dia==3){
    printf("Terça. \n");
  }
  else if(dia==4){
    printf("Quarta. \n");
  }
  else if(dia==5){
    printf("Quinta. \n");
  }
  else if(dia==6){
    printf("Sexta. \n");
  }
  else{
    printf("Sábado. \n");
  }
  return 0;
}