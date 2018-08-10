#include <stdio.h>
 
main () {
 int TAM,i,X,Y,auxTROCA;
 int ContaRep=0,guardaNUM=0,MAIOR=0,REPET=0;
 
        scanf("%d", &TAM);
        int vet_MAX[TAM];
 
        for(i=0;i<TAM;i++){
            scanf("%d", &vet_MAX[i]);
        }
 
        for(X=0;X<TAM;X++){
 
        for(Y=X+1;Y<TAM;Y++){///SEMPRE UM ELEMENTO A FRENTE
 
            if(vet_MAX[X] > vet_MAX[Y]){
 
                auxTROCA= vet_MAX[X];
                vet_MAX[X]= vet_MAX[Y];
                vet_MAX[Y]= auxTROCA;
 
            }
        }
    }
 
    ///[1] COMEÇANDO O CICLO PARA VER QUAL NUMERO É O MAIOR
    for(X=0 ; X < TAM ; X++)
    {
 
        for(Y=X ; Y < TAM ; Y++)
        {
            if(vet_MAX[Y] == vet_MAX[X]){//(2) COMPARANDO SE EXISTE UM ELEMENTO IGUAL E CONTANDO QUANTAS VEZES APARECE
                    ContaRep += 1; //(3) CONTANDO AS REPETIÇÕES
                    guardaNUM = vet_MAX[X]; ///[4] GUARDA O ELEMENTO
            }
        }
 
    ///[5] COMPARA QUAL TEM O MAIOR INDICE DE REPETIÇÃO
    if ((REPET < ContaRep)&&(MAIOR < guardaNUM)){
 
            MAIOR= guardaNUM;
            REPET= ContaRep;
    }
 
    ContaRep = 0;//(1) CICLO DO CONTADOR VOLTANDO AO 0
    }
    printf("%d\n%d", MAIOR, REPET);
}
