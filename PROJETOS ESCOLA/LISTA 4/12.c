#include <stdio.h>

int main (void) {

  int x,y,lc,soma=0,a=0;
  char seg;

  scanf("%d", &lc);
  int matriz[lc+1][lc+1];

  /*
   S = SEGURA
   U = NAO SEGURA
   PARA FICAR SEGURO, PRECISA DE 2 CAMERAS EM CADA QUADRA
  */
  for (x = 0; x < lc+1; x++) {
      for ( y = 0; y < lc+1; y++) {
        scanf("%d", &matriz[x][y]);
      }
  }

  for (x = 0; x < lc+1; x+=2) {
      for ( y = 0; y < lc+1; y+=2) {
        if(matriz[x][y]==1) a++;
        if(matriz[x][y+1]==1) a++;
        if(matriz[x+1][y]==1) a++;
        if(matriz[x+1][y+1]==1) a++;

        if(a<2){
          printf("U");
        } else if(a>=2){
          printf("S");
        }
        a=0;
      }
      a=0;
      printf("\n");

  }

  return 0;
}
