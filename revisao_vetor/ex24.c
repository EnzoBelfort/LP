#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100

int main(){
  int i, j, dados[max], numeros[6]={1,2,3,4,5,6}, contador[6]={0,0,0,0,0,0};

  srand(time(NULL));
  for(i=0;i<max;i++){
    dados[i] = rand()%6+1;
    for(j=0;j<6;j++){
      if(dados[i]==numeros[j]){
        contador[j]++;
      }
    }
  }
  for(j=0;j<6;j++){
    printf("A face %i caiu pra cima %i vezes. \n",j+1,contador[j]);
  }
  return 0;
}