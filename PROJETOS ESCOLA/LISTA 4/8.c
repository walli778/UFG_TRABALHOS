#include <stdio.h>

int main (void) {

    int linha,coluna,valor_borda,largura_borda;
    int x,y,i;

    scanf("%d %d %d %d", &linha,&coluna, &largura_borda, &valor_borda);
    int vet[linha][coluna];

    if((largura_borda == coluna)&&(largura_borda == linha)){

      for(x=0;x<linha;x++){
        for(y=0;y<coluna;y++){
          vet[x][y] = valor_borda;
        }
      }

    } else if (largura_borda == 1){

      for(x=0;x<linha;x++){
        for(y=0;y<coluna;y++){
          if(x==0 || x+1==linha || y==0 || y+1==coluna){
            vet[x][y] = valor_borda;

          } else vet[x][y] = 0;
        }
      }

    } else if (largura_borda >= 2){

      for(x=0;x<linha;x++){
        for(y=0;y<coluna;y++){
          if(x==0 || x+1==linha || x+2 == linha || x == 1|| y==0 || y+1==coluna || y == 1|| y+2 == coluna){
            vet[x][y] = valor_borda;

          } else vet[x][y] = 0;
        }
      }

    }

    printf("P%d\n", valor_borda);
    printf("%d %d\n", linha,coluna);
    printf("%d%d%d\n", valor_borda,linha,coluna);

    for(x=0;x<linha;x++){
      for(y=0;y<coluna;y++){
        printf("%d ", vet[x][y]);
      }
     printf("\n");
    }

 return(0);
}
