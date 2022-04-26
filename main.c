/* JOGO DO SEGREDO */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int segredo, cont = 0, se, jogo;
  printf("DESAFIO: Senha da porta mágica.\n");
  do{
    srand(time(NULL));
    segredo = rand() % 100 + 1;
    printf("Deseja jogar? SIM(1) NÂO(0) ");
    scanf("%i", &jogo);
    if(jogo == 1){
      while(cont < 7){
      printf("Digite o segredo: \nNumero de 1 ao 100.\n ");
      scanf("%i", &se);
      if(se >= 1 && se <=100){
        if(cont ==6 && se != segredo){
          printf("Vc não acertou\n");
          break;
        }
        cont++;
        if(se < segredo){
          printf("MENOR que o Segredo da porta.\n");
        }else if(se > segredo){
          printf("MAIOR que o Segredo da porta.\n");
        }else{
          printf("Você acertou o segredo\n");
          break;
        }
        }else{
          printf("Erro. Valor invalido, tente novamente.\n");
        }  
      }
    }else{
      if(jogo != 0){
        printf("Erro. Valor invalido, tente novamente.\n");
      }else{
        printf("Fim do jogo.\n");
      }
    }
  }while(jogo != 0);
  return 0;
}
