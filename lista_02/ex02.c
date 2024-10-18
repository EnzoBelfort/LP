#include <stdio.h>

int main(void) 
{
  float x;

  // peça um número
  printf("x: ");
  scanf("%f",&x);

  if(x>0) 
  {
    printf("x é positivo \n");
  }
  else if (x==0){
    printf("É nulo \n");
  }
  else {
    printf("x é negativo \n");
  }
}