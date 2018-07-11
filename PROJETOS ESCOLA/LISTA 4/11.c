#include <stdio.h>

int main (void) {

  int linha,coluna,x,y,a=0;

    scanf("%d", &linha);

    scanf("%d", &coluna);

  int matriz[linha][coluna];

  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      if(matriz[x][y]==1111) {
        printf("%d %d", x,y);
        a++;
      }
    }
  }

  if(a==0) printf("WALLY NAO ESTA NA MATRIZ");
  return (0);
}
