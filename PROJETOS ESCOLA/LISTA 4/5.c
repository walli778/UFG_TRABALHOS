int main (void){

  int linha,coluna;
  int x,y;

  scanf ("%d %d", &linha, &coluna);
  int matriz[linha][coluna];

  for (x = 1; x <= linha; x++) {
    for (y = 1; y <= coluna; y++) {
      if(x%2==0){

        if (y%2==0) {
          matriz[x][y] = 1;
        } else matriz[x][y] = 0;

      } else {

        if (y%2==0) {
          matriz[x][y] = 0;
        } else matriz[x][y] = 1;

      }
      printf("%d", matriz[x][y]);
    }
    printf("\n");
  }

  return(0);
}
