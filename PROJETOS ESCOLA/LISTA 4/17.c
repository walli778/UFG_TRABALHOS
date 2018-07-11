#include <stdio.h>
#define colunas 6

main () {

    int linhas,i,j,sorteados[6],cont=0,X=0,sena=0,quina=0,quadra=0;

    scanf("%d", &linhas);
    int matriz[linhas][colunas];

    for(i=0;i<linhas;i++){

        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<colunas;i++){
        scanf("%d", &sorteados[i]);
    }

    /// 3 COMPARA

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
             for(X=0;X<colunas;X++){

                if(matriz[i][j]==sorteados[X]){
                    cont++;
                }
            }
        }
        if(cont==6) sena++;
        if(cont==5) quina++;
        if(cont==4) quadra++;
        cont = 0;
    }

    if(sena==0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", sena);

    if(quina==0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", quina);

    if(quadra==0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", quadra);
}
