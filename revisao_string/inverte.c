#include<stdio.h>
#include<string.h>

int main(){
  char string[200];
  int i;

  printf("String: ");
  fgets(string, sizeof(string), stdin);
  string[strlen(string)-1] = '\0';

  for(i=strlen(string);i>=0;i--){
    printf("%c",string[i]);
  }
  printf("\n");
  return 0;
}