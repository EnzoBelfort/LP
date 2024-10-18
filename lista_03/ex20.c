#include<stdio.h>

int main(){
  int n;
  do {
  printf("N: ");
  scanf("%i",&n);
  
  while(n<-1 || n>16){
    printf("Valor inválido. \n");
    printf("Digite um valor válido: ");
    scanf("%i",&n);
  }
  int fat = 1;
  if(n==-1){
    return 0;
  }
  else{
  for(int i=n;i>=1;i--){
    fat = fat * i;
  }
  }  
  printf("%i! = %i \n",n,fat);
  printf("Se quiser parar o programa digite -1 \n"); 
  }
  while (n !=-1);
  return 0;
}