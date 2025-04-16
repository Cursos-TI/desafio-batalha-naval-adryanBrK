#include <stdio.h>

 int main(){
  int numero [10][10]= {
         {0,0,0,0,0,0,0,0,3,0},
         {0,0,0,0,0,0,0,0,3,0},
         {0,0,0,0,0,0,0,0,3,0},
         {0,0,0,0,0,0,0,0,3,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {3,3,3,3,3,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0}
  };

     int i, j;
    
     printf("   ");
    for( int i = 0; i < 10; i++) {
       printf("%d ", i);
     }
     printf("\n");

    for(int i = 0; i < 10; i++) {
       printf("%d ", i);
        for( int j = 0; j< 10; j++) {
              printf("%d ", numero[i][j]);
        }
        printf("\n");
    }
     printf("escolha um numero para a coluna de 1 a 10: ");
     scanf("%d", &i);
     printf("escolha um numero para a linha de 1 a 10: ");
     scanf("%d", &j);

     i--;
     j--;

     if(i >= 0 && i < 10 && j >= 0 && j <10) {
       printf("Valor na posicao [%d][%d]: %d\n", i + 1, j + 1, numero[i][j]);
      } else {
       printf("Escolha inválida. Os números devem estar entre 1 e 10.\n");
   }

  return 0;

 } 