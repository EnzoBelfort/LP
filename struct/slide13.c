#include <stdio.h>
#include <string.h>

#define MAX 50

struct aluno{
  char nome[30];
  int ra;
  int freq;
  float notas[3];
};

void imprimeMenu();
int buscaAluno(struct aluno[],int,int);
void DadosAluno(struct aluno[],int);
void listaTurma(struct aluno[],int);
void insereAluno(struct aluno[],int,int);
void removeAluno(struct aluno[],int,int);

int main(){
  struct aluno turmaLP[MAX];
  int op = 0, n = 0;
  int ra,pos;
  while(op!=5){
    imprimeMenu();
    scanf("%i",&op);
    switch(op){
      case 1:
        if(n==MAX){
          printf("\nTurma cheia.\n");
        }
        else{
          printf("RA: ");
          scanf("%i",&ra);
          getchar();
          if(buscaAluno(turmaLP,n,ra)==-1){
            insereAluno(turmaLP,n,ra);
            n++;
          }
          else{
            printf("\nAluno já está matriculado.\n");
          }
        }
        break;
      case 2:
        if(n==0){
          printf("\nTurma vazia\n");
        }
        else{
          printf("RA: ");
          scanf("%i",&ra);
          pos = buscaAluno(turmaLP,n,ra);
          if(pos!=-1){
            DadosAluno(turmaLP,pos);
          }
          else
            printf("\nRA não encontrado.\n");
        }
        break;
      case 3:
        if(n==0){
          printf("\nTurma vazia\n");
        }
        else{
          printf("RA: ");
          scanf("%i",&ra);
          pos = buscaAluno(turmaLP,n,ra);
          if(pos!=-1){
            printf("\nAluno removido:");
            DadosAluno(turmaLP,pos);
            removeAluno(turmaLP,n,pos);
            n--;
          }
          else{
            printf("\nAluno não está matriculado.\n");
          }
        }
        break;
      case 4:
        if(n==0){
          printf("\nTurma vazia\n");
        }
        else{
          listaTurma(turmaLP,n);
        }
        break;
      case 5:
        printf("\nFim.\n");
        break;
      default:
        printf("\nOpção incorreta!\n");
        break;
    }
  }
}

void imprimeMenu(){
  printf("\n\nMenu:");
  printf("\n1 - Inserir Aluno");
  printf("\n2 - Consultar Aluno");
  printf("\n3 - Remover Aluno");
  printf("\n4 - Listar Turma");
  printf("\n5 - Sair");
  printf("\nOpcão: ");
}

int buscaAluno(struct aluno turma[],int n,int ra){
  for(int i=0;i<n;i++){
    if(turma[i].ra==ra)
      return i;
  }
  return -1;
}

void insereAluno(struct aluno turma[],int n,int ra){
  printf("Nome: ");
  fgets(turma[n].nome,sizeof(turma[n].nome),stdin);
  turma[n].nome[strlen(turma[n].nome)-1] = '\0';
  turma[n].ra = ra;
  printf("Frequencia: ");
  scanf("%i",&turma[n].freq);
  for(int i=0;i<3;i++){
    printf("Nota %i: ",i+1);
    scanf("%f",&turma[n].notas[i]);
  }
}

void listaTurma(struct aluno turma[],int n){
  for(int i=0;i<n;i++){
    printf("\n");
    DadosAluno(turma,i);
  }
}

void removeAluno(struct aluno turmaLP[],int n,int k){
  for(int i=k;i<n-1;i++)
    turmaLP[i] = turmaLP[i+1];
}

void DadosAluno(struct aluno turma[],int pos){
  printf("\nNome: %s",turma[pos].nome);
  printf("\nRA: %i",turma[pos].ra);
  printf("\nFrequencia: %i",turma[pos].freq);
  for(int i=0;i<3;i++)
    printf("\nNota %i: %.2f",i+1,turma[pos].notas[i]);
}