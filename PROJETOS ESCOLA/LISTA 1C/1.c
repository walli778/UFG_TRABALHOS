#include <stdio.h>

main () {

        int n,teste, i =1;
        float popular,geral,arquibancada, cadeiras, resultado;

        scanf ("%d", &n);

        while ( i <= n) {
                scanf("%d %f %f %f %f", &teste, &popular,&geral, &arquibancada, &cadeiras);

                popular = teste*(popular/100)*1;
                geral = teste*(geral/100)*5;
                arquibancada = teste*(arquibancada/100)*10;
                cadeiras = teste*(cadeiras/100)*20;

                resultado = popular + geral + arquibancada + cadeiras;

                printf("A RENDA DO JOGO N. %d E = %.2f\n",i, truncf(resultado*100.0)/100.0);

                i++;
        }

}
