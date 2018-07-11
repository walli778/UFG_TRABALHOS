#include <stdio.h>

int main (void) {

  int lc,x,y,a=0,somaDIAG=0;

    scanf("%d", &lc);

  int matriz[lc][lc];
  int matrizA[lc][lc];

  for (x = 0; x < lc; x++) {
    for (y = 0; y < lc; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

  ///SOMANDO A DIAGONAL PRINCIAL

  for(x=0;x<lc;x++){
    for(y=0;y<lc;y++){
      if(x==y){
        somaDIAG += matriz[x][y];
      }
    }
  }

  //SAIDA DO PROGRAMA

  for (x = 0; x < lc; x++) {
    for (y = 0; y < lc; y++) {
      matrizA[x][y] = somaDIAG*matriz[x][y]+matriz[y][x];
      printf("%d ",matrizA[x][y]);
    }
    printf("\n");
  }

  return (0);
}
