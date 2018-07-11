#include <stdio.h>

int main () {

  int x,y,matriz[9][9],somaLINHA=0,somaCOLUNA=0;
  int certo=0;
  int somaLINHA02=0,somaLINHA25=0,somaLINHA58=0;
  int somaCOLUNA02=0,somaCOLUNA25=0,somaCOLUNA58=0;
  int certo02=0,certo25=0,certo58=0;

  for ( x = 0; x < 9; x++) {
    for ( y = 0; y < 9; y++) {
      scanf("%d", &matriz[x][y]);
    }
  }

  for ( x = 0; x < 9; x++) {
    for ( y = 0; y < 9; y++) {
      if(matriz[x][y] == 1||2||3||4||5||6||7||8||9){
        somaLINHA++;
      }
      if(matriz[y][x] == 1||2||3||4||5||6||7||8||9){
        somaCOLUNA++;
      }
    }
    if((somaLINHA==9)&&(somaCOLUNA==9)) certo++;

    somaLINHA = 0;
    somaCOLUNA = 0;
  }
  ///////////////////////////////////////////////////////////////////////
   for ( x = 0; x < 3; x++) {
    for ( y = 0; y < 3; y++) {
      if(matriz[x][y] == 1||2||3||4||5||6||7||8||9){
        somaLINHA02++;
      }
      if(matriz[y][x] == 1||2||3||4||5||6||7||8||9){
        somaCOLUNA02++;
      }
    }
    if((somaLINHA02==9)&&(somaCOLUNA02==9)) certo02++;

    somaLINHA02 = 0;
    somaCOLUNA02 = 0;
  }
  ///////////////////////////////////////////////////////////////////////
   for ( x = 3; x < 6; x++) {
    for ( y = 3; y < 6; y++) {
      if(matriz[x][y] == 1||2||3||4||5||6||7||8||9){
        somaLINHA25++;
      }
      if(matriz[y][x] == 1||2||3||4||5||6||7||8||9){
        somaCOLUNA25++;
      }
    }
    if((somaLINHA25==9)&&(somaCOLUNA25==9)) certo25++;

    somaLINHA25 = 0;
    somaCOLUNA25 = 0;
  }

    ///////////////////////////////////////////////////////////////////////
   for ( x = 6; x < 9; x++) {
    for ( y = 6; y < 9; y++) {
      if(matriz[x][y] == 1||2||3||4||5||6||7||8||9){
        somaLINHA58++;
      }
      if(matriz[y][x] == 1||2||3||4||5||6||7||8||9){
        somaCOLUNA58++;
      }
    }
    if((somaLINHA58==9)&&(somaCOLUNA58==9)) certo58++;

    somaLINHA58 = 0;
    somaCOLUNA58 = 0;
  }

  if ((certo==9)&&(certo02==9)&&(certo25==9)&&(certo58==9)) {
    printf("valido\n");
  } else printf("invalido\n");

  return 0;
}
