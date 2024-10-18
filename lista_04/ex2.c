#include<stdio.h>

#define MAX 10

int main(){
  float v[MAX];
  int i;

  for(i=0;i<MAX;i++){
    printf("vet %i: ",i+1);
    scanf("%f",&v[i]);
  }
  printf("\n");
  for(i=MAX-1;i>=0;i--){
    printf("vet %i = %.2f \n",i+1,v[i]);
  }
  return 0;
}