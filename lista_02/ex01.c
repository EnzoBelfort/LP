#include<stdio.h>

int main(void)
{
 float x, y;
  printf("X: ");
  scanf("%f",&x);
  printf("Y: ");
  scanf("%f",&y);

  if (x==y){
    printf("x é igual a y \n");
  }
    else{
      if (x>y)
       printf("x é o maior \n"); 
        
      else 
        printf("Y é maior \n");
    }          
}