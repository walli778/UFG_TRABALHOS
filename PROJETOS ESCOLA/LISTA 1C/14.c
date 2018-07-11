#include <stdio.h>

main () {

int n,x, fimm=1, i, j;

scanf("%d", &n);

if (n < 2) {
    printf("Campeonato invalido!");

} else {
/*
    while(i<=n) {

        while(j<=n) {
            if((i<j)&&(i!=n)) {
                printf("Final %d: Time%d X Time%d\n",fimm,i,j);
                fimm++;
            }
        j++;
        }
        i++;
    }
*/

    for(i=1;i<=n;i++) { //vai rodar ate o i ser igual ao n
        for(j=1;j<=n;j++) { ///vai rodar ate o j ser igual ao n
            if(i<j) { //entrara nessa codição enquato o i ser dferente de j E i ser menor que o j
                printf("Final %d: Time%d X Time%d\n", fimm,i,j);
                fimm++;
            }

        }
    }
}

}
