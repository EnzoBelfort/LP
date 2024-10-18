#include<stdio.h>
#include<string.h>

struct aluno{
  char nome[30];
  int ra;
  int freq;
  float notas[3];
};

int main(){
  struct aluno alunoLP;
  printf("Nome: ");
  fgets(alunoLP.nome,sizeof(alunoLP.nome),stdin);
  alunoLP.nome[strlen(alunoLP.nome)-1] = '\0';
  printf("RA: ");
  scanf("%i",&alunoLP.ra);
  printf("Frequência: ");
  scanf("%i",&alunoLP.freq);
  for(int i=0;i<3;i++){
    printf("Nota %i: ",i+1);
    scanf("%f",&alunoLP.notas[i]);
  }

  printf("\nInformações do aluno: \n");
  printf("Nome do aluno: %s\n",alunoLP.nome);
  printf("RA: %i\n",alunoLP.ra);
  printf("Frequência do aluno: %i\n",alunoLP.freq);
  printf("Notas do aluno: ");
  for(int i=0;i<3;i++){
    printf("%.2f, ",alunoLP.notas[i]);
  }
  printf("\n");
}