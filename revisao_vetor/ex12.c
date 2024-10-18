#include<stdio.h>
#define max 4

int main(){
  int idades[max], i, cont=0;
  float alturas[max], soma=0, media;

  for(i=0;i<max;i++){
    printf("Idade do %iºaluno: ",i+1);
    scanf("%i",&idades[i]);
    printf("Altura do %iºaluno: ",i+1);
    scanf("%f",&alturas[i]);
    soma = soma + alturas[i];
  }
  media = soma/max;
  for(i=0;i<max;i++){
    if(idades[i]>13 && alturas[i]<media){
      cont++;
    }
  }
  printf("Há %i alunos com mais de 13 anos e altura menor que a média. \n",cont);
  return 0;
}