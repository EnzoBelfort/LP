#include<stdio.h>

int main(){
  int i, k, cont=0,n;

  printf("Tamnanho do vetor: ");
  scanf("%i",&n);
  while(n<=1 || n>100){
    printf("Entre 1 e 100: ");
    scanf("%i",&n);
  }
  int numeros[n];

  for(i=0;i<n;i++){
    printf("%iº número do vetor: ",i+1);
    scanf("%i",&numeros[i]);
  }
  
  printf("Número para procurar no vetor: ");
  scanf("%i",&k);

  for(i=0;i<n;i++){
    if(numeros[i]==k){
      cont++;
    }
  }
  if(cont!=0){
    printf("O número %i repetiu %i vezes \n",k, cont);
  }
  else{
    printf("O número não aparece no vetor\n");
  }
  return 0;
}