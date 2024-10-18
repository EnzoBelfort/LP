#include<stdio.h>
#define max 12

int main(){
  float tempMes[max], soma=0, media;
  int i;

  for(i=0;i<max;i++){
    printf("Temperatura média do mês %i: ",i+1);
    scanf("%f",&tempMes[i]);
    soma = soma + tempMes[i];
  }
  media = soma/max;
  printf("\nMeses com temperaturas maiores que a média anual: \n");
  for(i=0;i<max;i++){
    if(tempMes[i]>media){
      switch (i+1){
        case 1:
        printf("Janeiro com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 2:
        printf("Feveiro com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 3:
        printf("Março com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 4:
        printf("Abril com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 5:
        printf("Maio com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 6:
        printf("Junho com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 7:
        printf("Julho com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 8:
        printf("Agosto com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 9:
        printf("Setembro com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 10:
        printf("Outubro com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 11:
        printf("Novembro com temperatura de %.1f.\n",tempMes[i]);
        continue;
        
        case 12:
        printf("Dezembro com temperatura de %.1f.\n",tempMes[i]);
        continue;
      }
    }
  }
}