#include <stdio.h>

int main (void) {

  int linha,coluna,x,y,MENOR=0,MAIOR=0,iMENOR=0,iMAIOR=0;
  double indiceMAIOR,indiceMENOR;
  int lc;

    scanf("%d", &linha);

    scanf("%d", &coluna);

  lc = linha*coluna;

  int matriz[linha][coluna];

  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

///MENOR ELEMENTO
  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      if((x==0)&(y==0)){
        MENOR = matriz[0][0];
      } else{
          if( MENOR >= matriz[x][y]){
            MENOR = matriz[x][y];
          }
      }
    }
  }

  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      if(matriz[x][y] == MENOR){
        iMENOR++;
      }
    }
  }

  ///MAIOR ELEMENTO
    for (x = 0; x < linha; x++) {
      for (y = 0; y < coluna; y++) {
        if((x==0)&(y==0)){
          MAIOR = matriz[0][0];
        } else{
            if( MAIOR <= matriz[x][y]){
              MAIOR = matriz[x][y];
            }
        }
      }
    }

    for (x = 0; x < linha; x++) {
      for (y = 0; y < coluna; y++) {
        if(matriz[x][y] == MAIOR){
          iMAIOR++;
        }
      }
    }

  indiceMAIOR = (iMAIOR/(float)lc)*100;
  indiceMENOR = (iMENOR/(float)lc)*100;

  printf("%d %.2lf%%\n", MENOR,indiceMENOR);
  printf("%d %.2lf%%\n", MAIOR,indiceMAIOR);
  return (0);
}
