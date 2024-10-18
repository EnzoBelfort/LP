#include<stdio.h>

int main(){
  int i, j, cont=0;
  float media[10], soma, notas[4];

  for(i=0;i<10;i++){
    printf("%iº aluno\n",i+1);
    soma = 0;
    for(j=0;j<4;j++){
      printf("Nota %i: ",j+1);
      scanf("%f",&notas[j]);
      soma = soma + notas[j];
    }
    media[i] = soma/4;
    printf("Média: %.2f\n",media[i]);
    if(media[i]>=7){
      cont++;
    }
  }
  printf("\n%i alunos tiveram média maior que 7. \n",cont);
  return 0;
}