#include<stdio.h>

int main(){
  int n1,n2,n3;
  printf("N1: ");
  scanf("%i",&n1);
  printf("N2: ");
  scanf("%i",&n2);
  printf("N3: ");
  scanf("%i",&n3);

  if(n1>=n2 && n1>=n3){
    if(n2>=n3){
      printf("%i, %i, %i \n",n1,n2,n3);
    }
    else{
      printf("%i, %i, %i \n",n1,n3,n2);
    }
  }
  else if(n2>=n1 && n2>=n3){
    if(n1>=n3){
      printf("%i, %i, %i \n",n2,n1,n3);
    }
    else{
      printf("%i, %i, %i \n",n2,n3,n1);
    }
  }
  else if(n3>=n1 && n3>=n2){
    if(n1>=n2){
      printf("%i, %i, %i \n",n3,n1,n2);
    }
    else{
      printf("%i, %i, %i \n",n3,n2,n1);
    }
  }
  return 0;
}