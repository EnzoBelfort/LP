#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int mat[4][5], somalinha[4]={0,0,0,0}, i, j, total=0;

  printf("Matriz: \n");
  srand(time(NULL));
  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
      mat[i][j] = rand()%11;
      somalinha[i] = somalinha[i] + mat[i][j];
      printf("%i \t",mat[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++){
    total = total + somalinha[i];
  }
  printf("\nSoma total: %i\n",total);
  return 0;
}