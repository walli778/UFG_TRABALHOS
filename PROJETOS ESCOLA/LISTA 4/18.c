#include <stdio.h>

int main (void) {

  int linha,coluna,quad,j,auxTROCA;

  scanf("%d", &quad);
  int MATRIZ [quad][quad];

  for(linha=0;linha<quad;linha++){
    for(coluna=0;coluna<quad;coluna++){
      scanf("%d", &MATRIZ[linha][coluna]);
    }
  }

  for(linha = 0;linha < quad;linha++){
    for(coluna = quad-1;coluna >= 0;coluna--){
      for (j = coluna-1; j >= 0; j--) {
        if(MATRIZ[coluna][linha] <= MATRIZ[j][linha]){
          auxTROCA = MATRIZ[j][linha];
          MATRIZ[j][linha] = MATRIZ[coluna][linha];
          MATRIZ[coluna][linha] = auxTROCA;
        }
      }
    }
  }

  for(linha=0;linha<quad;linha++){
    for(coluna=0;coluna<quad;coluna++){
      printf("%d ", MATRIZ[linha][coluna]);
    }
    printf("\n");
  }

  return (0);
}
