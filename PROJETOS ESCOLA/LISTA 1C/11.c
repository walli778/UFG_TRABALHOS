#include <stdio.h>

main () {


int n,///numeros da sequencia
    num, ///numero da sequencia
    antnum, ///o proximo numero da sequencia
    comp=1, //comprimento calculando
    compMAX=1,//comprimento maximo
    i;//utilizado para o for

scanf("%d", &n);
scanf("%d", &num);

comp = 1;
compMAX = 1;

    for (i=1;i<n;i++) {
    scanf("%d", &antnum);
        if(antnum>num){
        comp+=1;

        if (compMAX <comp)
            compMAX = comp;

        }else
            comp = 1;
            num = antnum;
    }

 printf("O comprimento do segmento crescente maximo e: %d",compMAX);
}
