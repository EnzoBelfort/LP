#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
  char tabuleiro[3][3]={{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};
  int i, j, linha, coluna;
  int k, l, contO = 0, contX = 0, contOcoluna = 0, contXcoluna = 0;
  char jogador1[50], resposta;

  printf("Jogador: ");
  fgets(jogador1, sizeof(jogador1), stdin);
  jogador1[strlen(jogador1)-1] = '\0';
  
  printf("Você quer ser X ou O? \n");
  scanf(" %c",&resposta);
  while(resposta!='X' && resposta!='O'){
    printf("Caracter inválido. \n");
    printf("X ou O? ");
    scanf(" %c",&resposta);
  }
  
  printf("Tabuleiro: \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%c \t",tabuleiro[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  if(resposta=='X'){
    for(i=0;i<9;i++){
    if(i%2==0){
      do{
        printf("Jogada de %s:\n",jogador1);
        printf("Linha: ");
        scanf("%i",&linha);
        while(linha<1 || linha>3){
          printf("Digite uma linha entre 1 e 3: \n");
          printf("Linha: ");
          scanf("%i",&linha);
      }
      printf("Coluna: ");
      scanf("%i",&coluna);
      while(coluna<1 || coluna>3){
        printf("Digite uma coluna entre 1 e 3: \n");
        printf("Coluna: ");
        scanf("%i",&coluna);
      }
      }while(tabuleiro[linha-1][coluna-1]=='O' || tabuleiro[linha-1][coluna-1]=='X');
      tabuleiro[linha-1][coluna-1] = 'X';
    }
    else{
      do{
        srand(time(NULL));
        linha = rand()%3;
        coluna = rand()%3;
      }while(tabuleiro[linha][coluna]=='O' || tabuleiro[linha][coluna]=='X');
      tabuleiro[linha][coluna] = 'O';
      printf("O computador jogou na posição (%i,%i)\n",linha, coluna);
    }
    printf("Tabuleiro: \n");
    for(k=0;k<3;k++){
      for(l=0;l<3;l++){
        printf("%c\t",tabuleiro[k][l]);
      }
      printf("\n");
    }
    for(k=0;k<3;k++){
      for(l=0;l<3;l++){
        if(tabuleiro[k][l]=='O'){
          contO++;
        }
        if(tabuleiro[k][l]=='X'){
          contX++;
        }
      }
      if(contO==3){
        printf("\n\nO computador ganhou o partida. \n");
        return 0;
      }
      if(contX==3){
        printf("\n\n%s ganhou a partida. \n", jogador1);
        return 0;
      }
      contO = 0;
      contX = 0;
    }  
    for(l=0;l<3;l++){
      for(k=0;k<3;k++){
        if(tabuleiro[k][l]=='O'){
          contOcoluna++;
        }
        if(tabuleiro[k][l]=='X'){
          contXcoluna++;
        }
      }
      if(contOcoluna==3){
        printf("\n\nO computador ganhou o partida. \n");
        return 0;
      }
      if(contXcoluna==3){
        printf("\n\n%s ganhou o partida. \n", jogador1);
        return 0;
      }
      contOcoluna = 0;
      contXcoluna = 0;
    }
    if(tabuleiro[0][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O'){
      printf("\n\nO computador ganhou a partida. \n");
      return 0;
    }
    if(tabuleiro[0][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X'){
      printf("\n\n%s ganhou a partida. \n",jogador1);
      return 0;
    }
    if(tabuleiro[0][2]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][0]=='X'){
      printf("\n\n%s ganhou a partida. \n",jogador1);
      return 0;
    }
    if(tabuleiro[0][2]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][0]=='O'){
      printf("\n\nO computador ganhou a partida. \n");
      return 0;
    }
      printf("\n");
    }
  }

    
  else{
    for(i=0;i<9;i++){
    if(i%2==0){
      do{
        srand(time(NULL));
        linha = rand()%3;
        coluna = rand()%3;
      }while(tabuleiro[linha][coluna]=='O' || tabuleiro[linha][coluna]=='X');
      tabuleiro[linha][coluna] = 'X';
      printf("O computador jogou na posição (%i,%i)\n",linha, coluna);
    }
    else{
      do{
        printf("Jogada de %s:\n",jogador1);
        printf("Linha: ");
        scanf("%i",&linha);
        while(linha<1 || linha>3){
          printf("Digite uma linha entre 1 e 3: \n");
          printf("Linha: ");
          scanf("%i",&linha);
      }
      printf("Coluna: ");
      scanf("%i",&coluna);
      while(coluna<1 || coluna>3){
        printf("Digite uma coluna entre 1 e 3: \n");
        printf("Coluna: ");
        scanf("%i",&coluna);
      }
      }while(tabuleiro[linha-1][coluna-1]=='O' || tabuleiro[linha-1][coluna-1]=='X');
      tabuleiro[linha-1][coluna-1] = 'O';
    }
    printf("Tabuleiro: \n");
    for(k=0;k<3;k++){
      for(l=0;l<3;l++){
        printf("%c\t",tabuleiro[k][l]);
      }
      printf("\n");
    }
    for(k=0;k<3;k++){
      for(l=0;l<3;l++){
        if(tabuleiro[k][l]=='O'){
          contO++;
        }
        if(tabuleiro[k][l]=='X'){
          contX++;
        }
      }
      if(contO==3){
        printf("\n\n%s ganhou a partida. \n", jogador1);
        return 0;
      }
      if(contX==3){
        printf("\n\nO computador ganhou a partida");
        return 0;
      }
      contO = 0;
      contX = 0;
    }  
    for(l=0;l<3;l++){
      for(k=0;k<3;k++){
        if(tabuleiro[k][l]=='O'){
          contOcoluna++;
        }
        if(tabuleiro[k][l]=='X'){
          contXcoluna++;
        }
      }
      if(contOcoluna==3){
        printf("\n\n%s ganhou o partida. \n", jogador1);
        return 0;
      }
      if(contXcoluna==3){
        printf("\n\nO computador ganhou o partida. \n");
        return 0;
      }
      contOcoluna = 0;
      contXcoluna = 0;
    }
    if(tabuleiro[0][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O'){
      printf("\n\n%s ganhou a partida. \n",jogador1);
      return 0;
    }
    if(tabuleiro[0][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X'){
      printf("\n\nO computador ganhou a partida. \n");
      return 0;
    }
    if(tabuleiro[0][2]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][0]=='X'){
      printf("\n\nO computador ganhou a partida. \n");
      return 0;
    }
    if(tabuleiro[0][2]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][0]=='O'){
      printf("\n\n%s ganhou a partida. \n",jogador1);
      return 0;
    }
    printf("\n");
  }
  }
  printf("A partida empatou, deu velha. \n");
  return 0;
}