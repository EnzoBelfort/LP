#include<stdio.h>
#define max 5

int main(){
  int matriz[max][max];
  int i, j;

  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      if(i==j){
        matriz[i][j] = 1;
      }
      else{
        matriz[i][j] = 0;
      }
    }
  }
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      printf("%i \t",matriz[i][j]);
    }
    printf("\n");
  }
}