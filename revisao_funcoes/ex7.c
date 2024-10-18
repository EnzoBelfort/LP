#include<stdio.h>
#include<string.h>

int palindromo(char[]);

int main(){
  char palavra[30];
  printf("Paalvra ou frase: ");
  fgets(palavra, sizeof(palavra), stdin);
  palavra[strlen(palavra)-1] = '\0';
  
  if(palindromo(palavra)==1){
    printf("%s é palíndromo.\n",palavra);
  }
  else{
    printf("%s não é palíndromo.\n",palavra);
  }
  return 0;
}

int palindromo(char palavra[30]){
  for(int i=0;i<strlen(palavra)/2;i++){
    if(palavra[i]!=palavra[strlen(palavra)-i-1]){
      return 0;
    }
  }
  return 1;
}