#include<stdio.h>

int combinacao(int,int);

int main(){
  int x, y;

  printf("Numero de objetos: ");
  scanf("%i",&x);
  printf("Tomados de n em n: ");
  scanf("%i",&y);

  printf("Quantidade de combinações: %i\n",combinacao(x,y));
  return 0;
}

int combinacao(int n, int r){
  int c, fatn=1, fatr=1, fat2=1, i;
  for(i=n;i>0;i--){
    fatn = fatn * i;
  }
  for(i=n-r;i>0;i--){
    fat2 = fat2 * i;
  }
  for(i=r;i>0;i--){
    fatr = fatr * i;
  }
  c = fatn/(fatr*fat2);
  return c;
}