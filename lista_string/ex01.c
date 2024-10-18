#include<stdio.h>
#include<string.h>

int main(){
  char txt[200], txt2[200];
  int i, tam1, tam2, max;

  printf("Digite uma frase frase: ");
  fgets(txt, sizeof(txt), stdin);
  txt[strlen(txt)-1] = '\0';
  tam1 = strlen(txt);
  max = tam1;
  
  printf("Digite outra frase: ");
  fgets(txt2, sizeof(txt2), stdin);
  txt2[strlen(txt2)-1] = '\0';
  tam2 = strlen(txt2);

  if(tam2>tam1){
    max = tam2;
  }

  printf("String 1: %s \nString 2: %s \n",txt, txt2);
  printf("Tamanho de '%s': %i\nTamanho de '%s': %i \n",txt, tam1, txt2, tam2);

  if(tam1 == tam2){
    printf("As duas strings tem tamanhos iguais. \n");
  }
  else{
    printf("As duas strings são de tamanhos diferentes. \n");
  }

  for(i=0;i<max;i++){
    if(txt[i] != txt2[i]){
      printf("As duas strings possuem conteúdo diferente. \n");
      return 0;
    }
  }
  printf("As duas strings possuem mesmo conteúdo. \n");
  return 0;
}