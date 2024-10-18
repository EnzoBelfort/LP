#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10

int main(){
  int v1[max], v2[max], v3[3*max], v4[max], i, j;

  srand(time(NULL));
  for(i=0;i<max;i++){
    v1[i] = rand()%101;
    v2[i] = rand()%101;
    v4[i] = rand()%101;
  }
  printf("Vet 1: ");
  for(i=0;i<max;i++){
    printf("%i ",v1[i]);
  }
  printf("\nVet 2: ");
  for(i=0;i<max;i++){
    printf("%i ",v2[i]);
  }
  printf("\nVet 4: ");
  for(i=0;i<max;i++){
    printf("%i ",v4[i]);
  }
  printf("\nVetor 3: ");
  for(i=0;i<3*max;i++){
    if(i%3==0){
      v3[i] = v1[i/3];
    }
    else if(i%3==1){
      v3[i] = v2[i/3];
    }
    else{
      v3[i] = v4[i/3];
    }
    printf("%i ",v3[i]);
  }
  printf("\n");
  return 0;
}