#include<stdio.h>

int main(){
  int n,fat=1,sensor;
  printf("N: ");
  scanf("%i",&n);
  while(n<=0 || n>16){
    printf("Valor inválido \n");
    printf("N: ");
    scanf("%i",&n);
  }
  
  for(int i=n;i>=1;i--){
    fat = fat * i;
  }
  printf("%i! = %i \n",n,fat);
  printf("digite -1 se quiser parar: ");
  scanf("%i",&sensor);
  } while(sensor!=-1);  
}