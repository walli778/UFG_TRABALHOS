#include <stdio.h>

int main (void){

  int linha,coluna;
  int x,y,i=0;

  scanf ("%d %d", &linha, &coluna);
  
  for (x = 0; x < linha; x++) {
    for (y = 0; y < coluna; y++) {
      if(x%2==0){

        if (y%2==0){
          printf("0 ");
        }else{
           i++;
           printf("%d ",i);
        }
      } else {

        if (y%2==0){
          i++;
          printf("%d ",i);
        }else printf("0 ");

      }
    }
    printf("\n");
    //i++;
  }

  return(0);
}
