#include<stdio.h>
#define MAX 10

int main(){
  int A[MAX], B[MAX], soma[MAX];
  int i;
  printf("Primeiro conjunto: \n");
  for(i=0;i<MAX;i++){
    printf("N(%i): ",i+1);
    scanf("%i",&A[i]);
  }
  printf("\n");
  printf("Segundo Conjunto: \n");
  for(i=0;i<MAX;i++){
    printf("N(%i): ",i+1);
    scanf("%i",&B[i]);
  }
  printf("\nSomas: \n");
  for(i=0;i<MAX;i++){
    soma[i] = A[i] + B[i];
    printf("Soma %i: %i \n",i+1,soma[i]);
  }
  return 0;
}

// int main(){
//   int A[MAX], B[MAX], soma[MAX];
//   int i;
//   printf("Primeiro conjunto: \n");
//   for(i=0;i<MAX;i++){
//     printf("N(%i): ",i+1);
//     scanf("%i",&A[i]);
//   }
//   printf("\n");
//   printf("Segundo Conjunto: \n");
//   for(i=0;i<MAX;i++){
//     printf("N(%i): ",i+1);
//     scanf("%i",&B[i]);
//     soma[i] = A[i] + B[i];
//     printf("Soma %i = %i\n\n",i+1,soma[i]);
//   }
//   return 0;
// }


// int main(){
//   int A[MAX], B[MAX], soma[MAX];
//   int i;
//   printf("Primeiro conjunto: \n");
//   for(i=0;i<MAX;i++){
//     printf("N1(%i): ",i+1);
//     scanf("%i",&A[i]);
//     printf("N2(%i): ",i+1);
//     scanf("%i",&B[i]);
//     soma[i] = A[i] + B[i];
//     printf("Soma(%i) = %i \n",i+1,soma[i]);
//   }
//   return 0;
// }