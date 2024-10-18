#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 6

int main(){
  int numeros[max][max], i, j, cont=0;

  printf("Matriz: \n");
  srand(time(NULL));
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      numeros[i][j] = rand()%51;
      if(numeros[i][j]>10){
        cont++;
      }
      printf("%i\t",numeros[i][j]);
    }
    printf("\n");
  }
  printf("\n%i números são maiores que 10.\n",cont);
  return 0;
}