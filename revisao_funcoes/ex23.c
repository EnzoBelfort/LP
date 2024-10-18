#include<stdio.h>

void resto5(int, int);

int main(){
  int x, y;
  printf("N1: ");
  scanf("%i",&x);
  printf("N2: ");
  scanf("%i",&y);
  while(y<x){
    printf("N2 deve ser maior que N1.\n");
    printf("N2: ");
    scanf("%i",&y);
  }
  resto5(x,y);
}

void resto5(int x, int y){
  int cont=0, aux[y], j=0;
  
  for(int i=x+1;i<y;i++){
    if(i%13==5){
      cont++;
      aux[j] = i;
      j++;
    }
  }
  if(cont==0){
    printf("Não há nenhum número no intervalo que geram resto 5 ao serem dividos por 13.\n");
  }
  else{
    printf("Núemros que dividos por 13 dão resto 5: ");
    for(int i=0;i<cont;i++){
      printf("%i ",aux[i]);
    }
    printf("\n");
  }
}