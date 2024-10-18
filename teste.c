#include <stdio.h>
#include <string.h>

int encontrouPalavra(char[],int,char[]);
void substituiPalavra(char[],int,char[],char[]);

int main(){
  char texto[100],p1[30],p2[30];
  int i;
  printf("Texto: ");
  fgets(texto,sizeof(texto),stdin);
  texto[strlen(texto)-1] = '\0';
  printf("Palavra 1: ");
  fgets(p1,sizeof(p1),stdin);
  p1[strlen(p1)-1] = '\0';
  printf("Palavra 2: ");
  fgets(p2,sizeof(p2),stdin);
  p2[strlen(p2)-1] = '\0';
  for(i=0;i<strlen(texto);i++){
    if(texto[i]==p1[0]){
      if(encontrouPalavra(texto,i,p1)){
        substituiPalavra(texto,i,p1,p2);
      }
    }
  }
  printf("Novo texto: %s.\n",texto);
  return 0;
}

int encontrouPalavra(char t[],int n,char p[]){
  int i;
  for(i=n;i<n+strlen(p);i++){
    if(t[i]!=p[i-n])
      return 0;
  }
  return 1;
}

void substituiPalavra(char t[],int n,char p1[],char p2[]){
  int i, dif;
  if(strlen(p1)==strlen(p2)){
    for(i=n;i<n+strlen(p2);i++){
      t[i] = p2[i-n];
    }
  }
  else{
    if(strlen(p1)<strlen(p2)){
      dif = strlen(p2)-strlen(p1);
      for(i=strlen(t);i>n;i--){
        t[i+dif] = t[i];
      }
      for(i=n;i<n+strlen(p2);i++){
        t[i] = p2[i-n];
      }
    }
    else{
      if(strlen(p1)>strlen(p2)){
        dif = strlen(p1)-strlen(p2);
      for(i=strlen(t);i>n;i--){
        t[i+dif] = t[i];
      }
      for(i=n;i<n+strlen(p1);i++){
        t[i] = p2[i-n];
      }
    }
  }
}