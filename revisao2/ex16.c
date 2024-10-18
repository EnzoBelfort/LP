#include<stdio.h>

int main(){
  int a,b,c,n,cont;

  a = 1;
  b = 1;
  cont = 2;
  printf("\n0\n1\n1\n");
  while(cont<32000){
    c = a + b;
    printf("%i ",c);
    a = b;
    b = c;

    if(c>500){
      return 0;
    }
  }
}