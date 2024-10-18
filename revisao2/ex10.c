#include<stdio.h>

int main(){
int n1,n2;
  printf("N1: ");
  scanf("%i",&n1);
  printf("N2: ");
  scanf("%i",&n2);

  if(n1<n2){
    for(int i=n1+1;i<n2;i++){
    printf("%i ",i);
  }
  }
  else{
    for(int i=n2+1;i<n1;i++){
      printf("%i ",i);
    }
  }
  printf("\n");
  return 0;
} 