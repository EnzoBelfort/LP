#include<stdio.h>

#define MAX 10

int main(){
  char v[MAX];
  int i,contCons=0;

  for(i=0;i<MAX;i++){
    printf("%iª letra: ",i+1);
    scanf(" %c",&v[i]);
  }
  printf("\nConsoantes: ");
  for(i=0;i<MAX;i++){
    if(v[i]!='a' && v[i]!='e' && v[i]!='i' && v[i]!='o' && v[i]!='u' && v[i]!='A' && v[i]!='E' && v[i]!='I' && v[i]!='O' && v[i]!='U'){
      contCons++;
      printf(" %c, ",v[i]);
    }
  }
  printf("\nNumero de consoantes: %i \n",contCons);
  return 0;
}