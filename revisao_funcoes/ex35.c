#include<stdio.h>
#include<string.h>

int strlen2(char[]);

int main(){
  char string[30];
  printf("String: ");
  fgets(string,sizeof(string),stdin);
  
  printf("%s possui %i caracteres.\n",string, strlen2(string));
}

int strlen2(char string[30]){
  int cont=0, i=0;
  while(string[i]!='\0'){
    i++;
  }
  return i-1;
}