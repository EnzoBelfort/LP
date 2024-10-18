#include<stdio.h>

int main(){
  int idade,salario;
  char sexo,estado_civil;
  printf("Idade: ");
  scanf("%i",&idade);
  while(idade<0 || idade>150){
   printf("Idade inválida \n");
   printf("Idade: ");
   scanf("%i",&idade);
  }
  printf("Salário: ");
  scanf("%i",&salario);
  while(salario<0){
    printf("Salário inválido. \n");
    printf("Salário: ");
    scanf("%i",&salario);
  }
  printf("Sexo: ");
  scanf(" %c",&sexo);
  while(sexo!='f' && sexo!='F' && sexo!='m' && sexo!='M'){
    printf("Sexo inválido \n");
    printf("Sexo: ");
    scanf("%c",&sexo);
  }
  printf("Estado Civil: ");
  scanf(" %c",&estado_civil);
  while(estado_civil!='s' && estado_civil!='c' && estado_civil!='v' && estado_civil!='d' && estado_civil!='S' && estado_civil!='C' && estado_civil!='V' && estado_civil!='D'){
  printf("Estado cívil inválido \n");   
  printf("Estado civil: ");
  scanf("%c",&estado_civil);
  }
  return 0;
}