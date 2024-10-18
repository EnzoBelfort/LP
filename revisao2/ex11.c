#include<stdio.h>

int main(){
int n1,n2,soma=0;
  printf("N1: ");
  scanf("%i",&n1);
  printf("N2: ");
  scanf("%i",&n2);

  if(n1<n2){
    for(int i=n1+1;i<n2;i++){
    printf("%i ",i);
    soma = soma + i;
    }
  }
  else{
    for(int i=n2+1;i<n1;i++){
      printf("%i ",i);
      soma = soma +i;
    }
  }
  printf("\n");
  printf("Soma = %i\n",soma);
  return 0;
} 