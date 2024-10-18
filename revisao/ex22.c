#include<stdio.h>

int main(){
  int n1;
  printf("N!: ");
  scanf("%i",&n1);
  
  if(n1%2==0){
    printf("O número %i é par \n",n1);
  }
  else{
    printf("O número %i é ímpar \n",n1);
  }
}