#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int mat[4][5], somalinha[4]={0,0,0,0};
  int i, j, total=0;

  srand(time(NULL));
  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
      mat[i][j] = rand()%101;
      somalinha[i] = somalinha[i] + mat[i][j];
      printf("%i \t",mat[i][j]);
    }
    printf("\nSoma da linha %i: %i \n",i+1,somalinha[i]);
  }
  printf("\n");
  for(i=0;i<4;i++){
    total = total + somalinha[i];
  }
  printf("Total = %i \n",total);
  return 0;
}