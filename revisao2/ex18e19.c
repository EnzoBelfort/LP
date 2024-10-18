#include<stdio.h>

int main(){
  int n,maior,menor,soma=0,numeros;

  printf("Quantos números vc deseja colocar em um conjunto? ");
  scanf("%i",&n);
  maior = -32000;
  menor = 32000;

  for(int i=n;i>=1;i--){
   printf("N: ");
   scanf("%i",&numeros);
   while(numeros<=0 || numeros>=100){
     printf("Valor inválido \n");
     printf("N: ");
     scanf("%i",&numeros);
   }
   soma = soma + numeros;

   if(numeros>=maior){
     maior = numeros;
   } 
   if(numeros<=menor){
     menor = numeros;
   }
  }
  printf("Soma: %i\nMaior: %i\nMenor: %i\n",soma,maior,menor);
  return 0;
}