#include<stdio.h>
#include<string.h>

int main(){
  char palavra[25], aux[25];
  int cont=0, i, j;

  printf("Palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  palavra[strlen(palavra)-1] = '\0';

  for(i=0, j=strlen(palavra)-1;i<strlen(palavra)/2;i++, j--){
    if(palavra[i]==palavra[j]){
      cont++;
    }
  }
  if(cont==strlen(palavra)/2){
    printf("É palíndromo. \n");
  }
  else{
    printf("Não é palíndromo. \n");
  }
  return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main(){
//   char palavra[30], aux[30];
//   int i,cont=0;
  
//   printf("Palavra: ");
//   fgets(palavra,sizeof(palavra),stdin);
//   palavra[strlen(palavra)-1] = '\0';

//   for(i=strlen(palavra)-1;i>=0;i--){
//     aux[cont] = palavra[i];
//     cont++;
//   }

//   if(strcmp(palavra,aux)==0)
//     printf("É palindromo.\n");
//   else
//     printf("Não é palíndromo.\n");

//   return 0;
// }