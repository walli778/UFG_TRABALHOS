#include <stdio.h>

main () {

        int m, //numero de  linhas
            n; ///numero de colunas

        int i,j;

        scanf("%d %d", &m, &n);

        for(i=2; i<=m; i++) {
                printf("\n");
                for(j=1; j<=n; j++) {
                        if((i!=1)&&(i != j)&&(j<i)) { ///INICIADOR | A LINHA NAO PODE SER 1, E A LINHA E A COLUNA DEVEM SER DIFERENTES, E CLARO A LINHA TEM QUE SER MENOR QUE A COLUNA
                                printf("(%d,%d)", i,j);
                                if((i!=j+1)&&(j!=n)) {
                                        printf("-");
                                }

                        }
                }
        }


}
