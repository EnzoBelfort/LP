#include<stdio.h>

int strlenn(char[]);
int strcmpp(char[], char[]);
void strcpyy(char[], char[]);

int main(){
  char string1[300], string2[300];

  printf("String 1: ");
  fgets(string1, sizeof(string1), stdin);
  printf("String 2: ");
  fgets(string2, sizeof(string2), stdin);

  printf("\nTamanho da String 1: %i",strlenn(string1));
  printf("\nTamanho da String 2: %i\n",strlenn(string2));

  if(strcmpp(string1, string2)==1){
    printf("As strings são iguais.\n");
  }
  else{
    printf("As strings são diferentes. \n");
  }
  strcpyy(string1, string2);
  return 0;
}

int strlenn(char string[300]){
  int cont=0, i=0;
  while(string[i]!='\0'){
    i++;
    cont++;
  }
  return cont-1;
}

int strcmpp(char string1[300], char string2[300]){
  int i=0, j=0,  cont1=0, cont2=0;
  while(string1[i]!='\0'){
    i++;
    cont1++;
  }
  while(string2[j]!='\0'){
    j++;
    cont2++;
  }

  if(cont1==cont2){
    for(i=0;i<cont1;i++){
      if(string1[i]==string2[i]){  
        
      }
      else{
        return 0;
      }
    }
    return 1;
  }
  else{
    return 0;
  }
}

void strcpyy(char string1[300], char string2[300]){
  int i=0;
  string2[0] = '\0';
  while(string1[i]!='\0'){
    string2[i] = string1[i];
    i++;
  }
  printf("\nNova String: %s",string2);
}