#include<stdio.h>
#define max 10

int main(){
  char letras[max];
  int i, contC=0;

  for(i=0;i<max;i++){
    printf("Letra: ");
    scanf(" %c",&letras[i]);
    while(!(letras[i]>='a' && letras[i]<='z') || (letras[i]>='A' && letras[i]<='Z')){
      printf("Caracter inválido. \n");
      printf("Letra: ");
      scanf(" %c",&letras[i]);
    }
    if(letras[i]!='a' && letras[i]!='e' && letras[i]!='i' && letras[i]!='o' && letras[i]!='u' && letras[i]!='A' && letras[i]!='E' && letras[i]!='I' && letras[i]!='O' && letras[i]!='U'){
      contC++;
    }
  }
  if(contC==0){
    printf("\nNão há consoantes \n");
    return 0;
  }
  else if(contC==1){
    printf("\nConsoante: ");
    for(i=0;i<max;i++){
      if(letras[i]!='a' && letras[i]!='e' && letras[i]!='i' && letras[i]!='o' && letras[i]!='u' && letras[i]!='A' && letras[i]!='E' && letras[i]!='I' && letras[i]!='O' && letras[i]!='U'){
        printf("%c\n",letras[i]);
        return 0;
      }
    }
  }
  else{
    printf("\nConsoantes: ");
    for(i=0;i<max;i++){
      if(letras[i]!='a' && letras[i]!='e' && letras[i]!='i' && letras[i]!='o' && letras[i]!='u' && letras[i]!='A' && letras[i]!='E' && letras[i]!='I' && letras[i]!='O' && letras[i]!='U'){
        printf("%c. ",letras[i]);
      }
    }
    printf("\n");
    return 0;
  }
}