#include<stdio.h>

int main(void){
  int n,contPar=0,contImpar=0;

  for(int i=0;i<10;i++){
    scanf("%i",&n);
    if(n%2 == 0){
      contPar++;
    }
    else{
      contImpar++;
    }
  }
  printf("%i",contPar);
  printf("%i \n",contImpar);

  return 0;
}