#include<stdio.h>

int main(){
  int v[5];

  for(int i=0;i<5;i++){
    printf("Digite o %i° numero: ",i+1);
    scanf("%i",&v[i]);
  }
  for(int i=0;i<5;i++){
    printf("v[%i] = %i \n",i,v[i]);
  }
  return 0;
}