#include<stdio.h>

int main(){
  int n,contPar=0,contImp=0;

  for(int i=1;i<=10;i++){
    printf("N: ");
    scanf("%i",&n);
    if(n%2==0){
      contPar++;
    }
    else{
      contImp++;
    }
  }
  printf("Pares: %i \nÍmpares: %i \n",contPar,contImp);
  return 0;
}