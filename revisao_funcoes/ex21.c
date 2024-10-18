#include<stdio.h>

int triangulo(int, int, int);

int main(){
  int l1, l2, l3;
  printf("Lado 1 do triângulo: ");
  scanf("%i",&l1);
  printf("Lado 2 do triângulo: ");
  scanf("%i",&l2);
  printf("Lado 3 do triângulo: ");
  scanf("%i",&l3);

  switch(triangulo(l1,l2,l3)){
    case 0:
    printf("O triângulo com medidas %i, %i e %i não existe.\n",l1,l2,l3);
    return 0;
    case 1: 
    printf("O triângulo é equilátero.\n");
    return 0;
    case 2:
    printf("O triângulo é isósceles.\n");
    return 0;
    case 3:
    printf("O triângulo é escaleno.\n");
    return 0;
  }
  return 0;
}

int triangulo(int l1, int l2, int l3){
  if(l1>l2+l3 || l2>l1+l3 || l3>l1+l2){
    return 0;
  }
  else if(l1==l2 && l2==l3){
    return 1;
  }
  else if(l1!=l2 && l2!=l3 && l1!=l3){
    return 3;
  }
  else{
    return 2;
  }
}