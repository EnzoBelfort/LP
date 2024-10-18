#include<stdio.h>

void fibonacci(int);

int main(){
  int n;
  printf("Quantidade de termos na sequência de Fibonacci: ");
  scanf("%i",&n);
  fibonacci(n);
  return 0;
}

void fibonacci(int n){
  int sequencia[n];

  sequencia[0] = 0;
  sequencia[1] = 1;
  for(int i=2;i<n;i++){
    sequencia[i] = sequencia[i-1] + sequencia[i-2];
  }
  printf("Sequência de %i números: ",n);
  for(int i=0;i<n;i++){
    printf("%i, ",sequencia[i]);
  }
  printf("\n");
}