#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 500

int main(){
  int dado[MAX];
  int i;
  float cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;

  srand(time(NULL));
  for(i=0;i<MAX;i++){
    dado[i] = rand()%6+1;
    switch(dado[i]){
      case 1: 
      cont1++;
      break;

      case 2:
      cont2++;
      break;

      case 3:
      cont3++;
      break;

      case 4:
      cont4++;
      break;

      case 5:
      cont5++;
      break;

      default:
      cont6++;
      break;
    }
  }
  printf("A face 1 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\nA face 2 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\nA face 3 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\nA face 4 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\nA face 5 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\nA face 6 apareceu %.0f vezes, que representa %.1f por cento de todas as jogadas\n)",cont1, (cont1/MAX)*100, cont2, (cont2/MAX)*100, cont3, (cont3/MAX)*100, cont4, (cont4/MAX)*100, cont5, (cont5/MAX)*100, cont6, (cont6/MAX)*100);
  return 0;
}