#include <stdio.h>

int main (void) {

  int MATRIZ [2][2];
  float Determinante;
  int x,y;

  for(x=0;x<2;x++){
    for(y=0;y<2;y++){
      scanf("%d", &MATRIZ[x][y]);
    }
  }

  Determinante = (MATRIZ[0][0] * MATRIZ[1][1]) - (MATRIZ[0][1] * MATRIZ[1][0]);

  printf("%.2f\n", Determinante);

  return (0);
}
