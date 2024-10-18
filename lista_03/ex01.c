#include<stdio.h>

int main(void){
  int x;

  do{
    printf("N: ");
    scanf("%i",&x);
    if(x<0 || x>10)
      printf("Valor inválido. \n");
  } while(x<0 || x>10);
  
  
  
  // float x;
  // printf("x: ");
  // scanf("%f",&x);
  // while(x<0 || x>10){
  //   printf("valor inválido. \n");
  //   printf("x: ");
  //   scanf("%f",&x);
  // }
  // printf("Valor válido. \n");
  // return 0;
}