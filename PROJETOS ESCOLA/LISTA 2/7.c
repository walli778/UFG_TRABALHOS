#include <stdio.h>
 
main () {
 
    int TAM,X,Y,guardaMAIOR=0,cont;
 
    scanf("%d", &TAM);
 
    while(TAM!=0){
 
            int vetor[TAM];
 
            ///[1] ESCANEIA OS VALORES DO VETOR
            for (X=0;X<TAM;X++)
            {
                scanf("%d", &vetor[X]);
            }
 
            ///[2]PERCORRE TODO O VETOR E DIZ QUAL É O MAIOR ELEMENTO
            for (X=0;X<TAM;X++)
            {
                if(X==0){
                    guardaMAIOR=vetor[X];
                }
                else if(vetor[X]>=guardaMAIOR){
                    guardaMAIOR=vetor[X];
                }
            }
 
            ///[3] AQUI COMEÇA A SAIDA DO PROGRAMA, MOSTRANDO O VALOR E QUANTOS SAO OS NUMEROS QUE SAO MENORES OU IGUAIS A ESSE VALOR
            for (X=0;X<=guardaMAIOR;X++)
            {
                        cont=0;
                for(Y=0;Y<TAM;Y++)
                {
                    if(vetor[Y]<=X){
                        cont++;
                    }
                }
 
                printf("(%d) %d\n", X,cont);
            }
 
        scanf("%d", &TAM);
    }
}
