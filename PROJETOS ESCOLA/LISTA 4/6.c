#include <stdio.h>

int main (void) {

  int x,y,matriz[2][2];
  float matrizAA[2][2];

  for (x = 0; x < 2; x++) {
    for (y = 0; y < 2; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

  matrizAA[0][0] = (matriz[0][0]*matriz[0][0]) + (matriz[0][1]*matriz[1][0]);
  matrizAA[0][1] = (matriz[0][0]*matriz[0][1]) + (matriz[0][1]*matriz[1][1]);
  matrizAA[1][0] = (matriz[1][0]*matriz[0][0]) + (matriz[1][1]*matriz[1][0]);
  matrizAA[1][1] = (matriz[1][0]*matriz[0][1]) + (matriz[1][1]*matriz[1][1]);

  for (x = 0; x < 2; x++) {
    for (y = 0; y < 2; y++) {
      printf("%.3f ",matrizAA[x][y]);
    }
    printf("\n");
  }

  return (0);
}
