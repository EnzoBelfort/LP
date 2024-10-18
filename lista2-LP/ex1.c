#include<stdio.h>
#define MAX 4

int main(){
  int v1[MAX], v2[MAX], v3[2*MAX];
  int i, j, apoio, suporte;
  printf("Primeiro vetor: \n");
  for(i=0;i<MAX;i++){
    printf("%i° número: ",i+1);
    scanf("%i",&v1[i]);
  }
  printf("\nSegundo vetor: \n");
  for(i=0;i<MAX;i++){
    printf("%i° número: ",i+1);
    scanf("%i",&v2[i]);
  }

  for(i=0;i<MAX;i++){
    apoio = v1[i];
    for(j=i;j<MAX;j++){
      if(apoio>v2[j]){
        apoio = v2[j];
      }
      suporte = v1[i];
      v3[i] = apoio;
      v3[j+1] = suporte;
    }
  }
  printf("\n Terceiro vetor ordenado: ");
  for(i=0;i<MAX*2;i++){
    printf("%i ",v3[i]);
  }
  printf("\n");
  return 0;
}