#include<stdio.h>
#define MAX 20

int main(){
  int numeros[MAX];
  int i;
  for(i=0;i<MAX;i++){
    printf("N: ");
    scanf("%i",&numeros[i]);
  }
  printf("\n");
  for(i=MAX-1;i>=0;i--){
    printf("%i ",numeros[i]);
  }
  printf("\n");
  return 0;
}