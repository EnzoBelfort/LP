#include<stdio.h>

int main(){
  int nota;
  printf("Nota: ");
  scanf("%i",& nota);

  while(nota>10 || nota<0){
    printf("Nota inválida. \n");
    printf("Nota: ");
    scanf("%i",&nota);
  }
  printf("\n");
  return 0;
}