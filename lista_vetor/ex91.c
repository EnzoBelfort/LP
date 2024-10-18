#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50

int main(){
  int numeros[MAX], auxiliar[MAX], i, j, k, cont=0;

  srand(time(NULL));
  printf("Conjunto: \n");
  for(i=0;i<MAX;i++){
    numeros[i] = rand()%101;
    printf("%i ",numeros[i]);
  }
  printf("\n");
  
  for(i=0;i<MAX;i++){
    for(k=0;k<cont;k++){
      if(numeros[i]==auxiliar[k]){
        break;
      }
    }
    if(k!=cont){
      continue;
    }
    auxiliar[cont] = numeros[i];
    cont++;
    printf("%i encontrado nas posições: %i ",numeros[i],i);
    for(j=i+1;j<MAX;j++){
      if(numeros[i]==numeros[j]){
        printf("%i ",j);
      }
    }
    printf("\n");
  }
  return 0;
}