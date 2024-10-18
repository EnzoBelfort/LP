#include<stdio.h>
#include<string.h>

struct aluno{
  char nome[30];
  int ra;
  int freq;
  float notas[3];
};

int main(){
  struct aluno turmaLP[3];
  for(int i=0;i<3;i++){
    printf("%iº aluno: \n",i+1);
    printf("Nome: ");
    fgets(turmaLP[i].nome,sizeof(turmaLP[i].nome),stdin);
    printf("RA: ");
    scanf("%i",&turmaLP[i].ra);
    printf("Frequência: ");
    scanf("%i",&turmaLP[i].freq);
    for(int j=0;j<3;j++){
      printf("Nota %i: ",j+1);
      scanf("%f",&turmaLP[i].notas[j]);
    }
    getchar();
    printf("\n");
  }
  printf("Informações da turma: \n");
  for(int i=0;i<3;i++){
    printf("%iº aluno: \n",i+1);
    printf("Nome: %s",turmaLP[i].nome);
    printf("RA: %i\n",turmaLP[i].ra);
    printf("Frequência: %i\n",turmaLP[i].freq);
    printf("Notas: ");
    for(int j=0;j<3;j++){
      printf("%.2f, ",turmaLP[i].notas[j]);
    }
    printf("\n\n");
  }
}