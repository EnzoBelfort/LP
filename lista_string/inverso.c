#include<stdio.h>
#include<string.h>

int main(){
  char string[200];
  int i;

  printf("Texto: ");
  fgets(string, sizeof(string), stdin);
  string[strlen(string)-1] = '\0';

  printf("Texto invertido: ");
  for(i=strlen(string)-1;i>=0;i--){
    printf("%c",string[i]);
  }
  printf("\n");
  return 0;
}