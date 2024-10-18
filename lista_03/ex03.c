#include<stdio.h>

int main(void){
  int idade;
  float salário;
  char sexo, Estado_Civil;

  printf("Digite sua idade: ");
  scanf("%i",&idade);
  while(idade<0 || idade>150){
    printf("Idade inválida. \n");
    printf("Digite sua idade: ");
    scanf("%i",&idade);    
  }
  while(salário<=0){
    printf("");
  }
  printf("Valores válidos \n");
  return 0;
}