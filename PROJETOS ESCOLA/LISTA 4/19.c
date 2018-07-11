#include<stdio.h>

int main (void){

  int lc,k;
  int linha,coluna,controle=1,j;

  scanf("%d %d", &lc, &k);//LC AxA, K=POTENCIA

  double matriz[lc][lc],matriz_reflex[lc][lc],matriz_original[lc][lc],aux=0;

  //[1]ESCANEIA A MATRIZ E REFLETE NAS OUTRAS DUAS
  for ( linha = 0; linha < lc; linha++) {
    for ( coluna = 0; coluna < lc; coluna++) {
        scanf("%lf", &matriz[linha][coluna]);
        matriz_reflex[linha][coluna] = matriz[linha][coluna];
        matriz_original[linha][coluna] = matriz[linha][coluna];
    }
  }

  //[2]COMEÇA A  MULTIPLICAR O PROGRAMA
  if(k>1){
    while(controle<k){
      for ( linha = 0; linha < lc; linha++) {
        for ( coluna = 0; coluna < lc; coluna++) {
          for ( j = 0; j < lc; j++) {
              aux += matriz_reflex[linha][j] * matriz_original[j][coluna];
              matriz[linha][coluna] = aux;
          }
          aux=0;
        }
      }

      for ( linha = 0; linha < lc; linha++) {
        for ( coluna = 0; coluna < lc; coluna++) {
          matriz_reflex[linha][coluna] = matriz[linha][coluna];

        }
      }
      controle++;
    }
  }

  for ( linha = 0; linha < lc; linha++) {
    for ( coluna = 0; coluna < lc; coluna++) {
        printf("%.3lf ", matriz[linha][coluna]);

    }
    printf("\n");
  }

  return 0;
}
