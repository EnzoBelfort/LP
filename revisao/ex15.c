#include<stdio.h>

int main(){
  int l1,l2,l3;
  printf("L1: ");
  scanf("%i",&l1);
  printf("L2: ");
  scanf("%i",&l2);
  printf("L3: ");
  scanf("%i",&l3);

  if(l1+l2<=l3 || l1+l3<=l2 || l2+l3<=l1){
    printf("O triângulo nao existe. \n");
  }
  else if(l1==l2 && l2==l3){
    printf("Triângulo equilátero. \n");
  }
  else if(l1==l2 || l1==l3 || l2==l3){
    printf("Triângulo isósceles. \n");
  }
  else{
    printf("Triângulo escaleno. \n");
  }
}