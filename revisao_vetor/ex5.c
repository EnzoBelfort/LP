#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 20

int main (){
  int numeros[max], pares[max], impares[max];
  int i, contPar=0, contImpar=0;

  srand(time(NULL));\
  printf("Vetor: ");
  for(i=0;i<max;i++){
    numeros[i] = rand()%101;
    if(numeros[i]%2==0){
      contPar++;
      pares[i] = numeros[i];
    }
    else{
      contImpar++;
      impares[i] = numeros[i];
    }
    printf("%i ",numeros[i]);
  }
  if(contPar==0){
    printf("\n\nNão há núemros pares. \n");
    printf("Ímpares: ");
    for(i=0;i<max;i++){
      printf("%i ",impares[i]);
    }
    return 0;
  }
  else if(contImpar==0){
    printf("\n\nNão há núemros ímpares. \n");
    printf("Pares: ");
    for(i=0;i<max;i++){
      printf("%i ",pares[i]);
    }
    return 0;
  }
  else{
    printf("\n\nPares: ");
    for(i=0;i<max;i++){
      if(numeros[i]%2==0){
      printf("%i ",pares[i]);
      }  
    }
    printf("\n\nÍmpares: ");
    for(i=0;i<max;i++){
      if(numeros[i]%2==1){
      printf("%i ",impares[i]);
      }  
    }
    printf("\n");
  }
  return 0;
}