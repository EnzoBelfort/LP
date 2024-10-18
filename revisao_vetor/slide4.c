// Função que ordena vetor:
// int* ordem(int *vet, int tam){
//   int i, j, apoio, aux, suporte;
//   for (i = 0; i< tam; i++){
//     apoio = vet[i];
//     for (j = i; j < tam; j++){
//       if (apoio > vet[j])
//         apoio = vet[j];
//         aux = j;
//     }
//     suporte = vet[i];
//     vet[i] = apoio;
//     vet[j] = suporte;
//   }
//   return vet;
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 20

int main(){
  int i, j, apoio, suporte, vet[tam];

  srand(time(NULL));
  for(i=0; i<tam; i++){
    vet[i] = rand()%101;
  }
  for(i = 0; i< tam; i++){
    apoio = vet[i];
    for(j = i; j < tam; j++){
      if (apoio > vet[j])
        apoio = vet[j];
    }
    suporte = vet[i];
    vet[i] = apoio;
    vet[j] = suporte;
  }
  return 0;
}