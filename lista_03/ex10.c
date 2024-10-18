#include<stdio.h>

int main(void){
  int n1,n2,i;
  printf("n1: ");
  scanf("%i",&n1);
  printf("n2: ");
  scanf("%i",&n2);

  if(n1>n2){
    for(i=n1-1;i>n2;i--){
      printf("%i ",i);
    }
  }
  if(n2>n1){
    for(i=n2-1;i>n1;i--){
      printf("%i ",i);
    }
  }
  
  printf("\n");
  return 0;
}