#include<stdio.h>

int Multip_Rec(int, int);

int main(){
  int x, y;
  printf("X: ");
  scanf("%i",&x);
  printf("Y: ");
  scanf("%i",&y);
  printf("%i x %i = %i\n",x,y,Multip_Rec(x,y));
  return 0;
}

int Multip_Rec(int n1, int n2){
  if(n1==0 || n2==0){
    return 0;
  }
  else if(n2==1){
    return n1;
  }
  else{
    return n1 + Multip_Rec(n1,n2-1);
  }
}