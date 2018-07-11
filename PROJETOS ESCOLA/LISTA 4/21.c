#include <stdio.h>
#include <stdlib.h>

int main () {

  int tabela[6][6] = {{ 0 ,63 ,210,190,-1 ,190},
                      {63 ,0  ,160,150,95 , 10},
                      {210,160,0  ,10 ,1  , 10},
                      {190,150,10 ,0  ,10 , 20},
                      {10 ,95 ,7  ,21 ,0  , 80},
                      {190, 2 , -1,41 ,80 , 0}};

  int nROTA,soma=0,x,y,InvalidRouth=0;
  scanf("%d", &nROTA);
  int vetROTA[nROTA],i=0;

  for (i = 0; i < nROTA; i++) scanf("%d", &vetROTA[i]);

  for (x = 0; x < nROTA-1; x++) {
      if(tabela[vetROTA[x]][vetROTA[x+1]] == -1){
        InvalidRouth++;
      }
  }

  for (x = 0; x < nROTA-1; x++) {
      soma += tabela[vetROTA[x]][vetROTA[x+1]];
  }

  if(InvalidRouth==0){
    printf("%d", soma);
  }else printf("rota invalida!");

  return 0;
}
