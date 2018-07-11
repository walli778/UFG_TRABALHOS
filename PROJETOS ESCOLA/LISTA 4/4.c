#include <stdio.h>

int main (void) {

  int linha,coluna,x,y;

  do{
    scanf("%d", &linha);
  }while ((linha>10)||(linha<=0));

  do{
    scanf("%d", &coluna);
  }while ((coluna>10)||(coluna<=0));

  int matriz[linha][coluna];

  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

  for (x = 0; x < linha; x++) {
      printf("linha %d:  ", x+1) ;
    for (y = 0; y < coluna; y++) {
      printf("%d", matriz[x][y]);
      if(y!=coluna-1) printf(",");
    }
    printf("\n");
  }

  return (0);
}
