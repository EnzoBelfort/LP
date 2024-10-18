#include<stdio.h>

int main(){
  char turno;
  printf("Digite o turno que você estuda: ");
  scanf("%c",&turno);

  if(turno=='m' || turno=='M'){
    printf("Bom Dia! \n");
  }
  else if(turno=='n' || turno=='N'){
    printf("Boa noite! \n");
  }
  else if(turno=='v' || turno=='V'){
    printf("Boa tarde! \n");
  }
  else{
    printf("Valor inválido \n");
  }
  return 0;
}