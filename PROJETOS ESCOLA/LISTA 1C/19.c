#include <stdio.h>

main () {

int n,i,calculo1=0,calculo2,SOMA=0,xadrez=32;

scanf("%d", &n);

    for(i=1;i<=xadrez;i++){
        //n = n*2;
        calculo1 = n;
        calculo2 = n*2;
        SOMA += calculo1+calculo2;
    }
printf("%d", SOMA-n);
}
