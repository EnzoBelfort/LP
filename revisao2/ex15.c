// #include<stdio.h>

// int main(){
//   int n,fibo=1;
//   printf("N: ");
//   scanf("%i",&n);
    
//   for(int i=0;i<n;i++){
//     printf("%i ",fibo);
//     fibo = fibo + i;
//   }
//   printf("\n");
//   return 0;
// }

#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;

  printf("Digite quantos termos da sequencia de Fibonacci voce quer:\n");
  scanf("%d", &n);

  if (n <= 1) {
    printf("Numero de termos invalido\n");
  }
  else {
    
    a = 1;
    b = 1;
    cont = 2;
    printf("\n\n1\n1\n");

    while(cont < n) {
      c = a + b;
      printf("%ld \n", c);
      a = b;
      b = c;
      cont = cont + 1;
      //eh a mesma coisa: cont++;
    }
  }

  return(0);
}