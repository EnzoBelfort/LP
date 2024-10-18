#include<stdio.h>

int main(){
  int n1,n2,n3;
  printf("N1: ");
  scanf("%i",&n1);
  printf("N2: ");
  scanf("%i",&n2);
  printf("N3: ");
  scanf("%i",&n3);

  if(n1==n2 && n2==n3){
    printf("Todos são iguais \n");
    printf("%i é o maior \n",n1);
  }
  else{
    if(n1>=n2 && n1>=n3){
      printf("%i é o maior \n",n1);
    }
    else if(n2>=n1 && n2>=n3){
      printf("%i é o maior \n",n2);
    }
    else{
      printf("%i é o maior \n",n3);
    }
  }

  if(n1<=n2 && n1<=n3){
    printf("%i é o menor \n",n1);
  }
  else if(n2<=n1 && n2<=n3){
    printf("%i é o menor \n",n2);
  }
  else{
    printf("%i é o menor \n",n3);
  }  
  return 0;
}