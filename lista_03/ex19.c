#include<stdio.h>

int main(){
  int n,numeros,soma=0,maior=0,menor=100;
  printf("Digite a quantidade de números que você deseja colocar em um conujunto: ");
  scanf("%i",&n);


  while(n<=0){
    printf("Valor inválido. \n");
    printf("Digite um valor válido: ");
    scanf("%i",&n);
  }
  for(int i=0;i<n;i++){
    printf("N: ");
    scanf("%i",&numeros);

    while(numeros<=0 || numeros>=100){
      printf("Valor inválido. \n");
      printf("N: ");
      scanf("%i",&numeros);
    }  
    
    soma=soma+numeros;
    
    if(numeros>=maior){
      maior = numeros;
    }
    if(numeros<=menor){
      menor = numeros;
    }
  }
  printf("O maior número é %i \n",maior);
  printf("O menor número é %i \n",menor);
  printf("A soma do conjunto é %i \n",soma);

  return 0;
}