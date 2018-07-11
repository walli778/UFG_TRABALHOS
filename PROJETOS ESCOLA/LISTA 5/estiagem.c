#include <stdio.h>

struct registro{

  int morador;
  int consumo;

}trocaSTRUCT;

main (){

  int controle=0,i=0,j=0,somaMORADOR=0,somaCONSUMO=0;
  double consumoMEDIO=0;
  int cd = 1;

  scanf("%d", &controle);
  struct registro CIDADE[controle];

  while(controle!=0){

    for ( i = 0; i < controle; i++) {

      scanf("%d %d", &CIDADE[i].morador, &CIDADE[i].consumo);
      somaMORADOR+=CIDADE[i].morador;
      somaCONSUMO+=CIDADE[i].consumo;

    }

    ///COMEÇANDO SAIDA
    for ( i = 0; i < controle; i++) {
      for ( j = i+1; j < controle; j++) {
        if(CIDADE[i].morador > CIDADE[j].morador){

          trocaSTRUCT = CIDADE[i];
          CIDADE[i] = CIDADE[j];
          CIDADE[j] = trocaSTRUCT;

        }
      }
    }

    printf("Cidade# %d:\n",cd);
    consumoMEDIO = (float)somaCONSUMO/(float)somaMORADOR;
    for(i=0;i<controle;i++){
      printf("%d", CIDADE[i].morador);
      if(i!=controle) printf("-");
      printf("%d ", (CIDADE[i].consumo/CIDADE[i].morador));
    }
    printf("\n");
    printf("Consumo medio: %.2lf m3.", consumoMEDIO);
    printf("\n");

    ///REINICIANDO
    scanf("%d", &controle);
    struct registro CIDADE[controle];
    somaMORADOR = 0;
    somaCONSUMO = 0;
    cd++;

  }

}
