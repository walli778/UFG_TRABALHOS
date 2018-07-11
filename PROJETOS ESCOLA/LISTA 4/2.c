#include <stdio.h>

int main (void) {

  int x,y,quad;

  scanf("%d", &quad);
  int MATRIZ [quad][quad];

  for(x=0;x<quad;x++){
    for(y=0;y<quad;y++){
      scanf("%d", &MATRIZ[x][y]);
    }
  }

  for(x=0;x<quad;x++){
    for(y=0;y<quad;y++){
      if(x==y){
        printf("%d\n", MATRIZ[x][y]);
      }
    }
  }

  return (0);
}
