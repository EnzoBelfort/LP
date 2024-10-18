#include<stdio.h>

void divisores(int);

int main(){
  int n;
  printf("N: ");
  scanf("%i",&n);
  divisores(n);
  return 0;
}

void divisores(int x){
  int aux[x], j=0;

  for(int i=1;i<=x;i++){
    if(x%i==0){
      aux[j] = i;
      j++;
    }
  }
  printf("Divisores de %i: ",x);
  for(int i=0;i<j;i++){
    printf("%i, ",aux[i]);
  }
  printf("\n");
}