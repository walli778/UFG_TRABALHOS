#include <stdio.h>
 
main () {
 
 
    int TAM,i=0,X=0,Y=0,auxTROCA,num;
 
    scanf("%d", &TAM);
    int vetor[TAM];
 
    for(i=0;i<TAM;i++){
        scanf("%d", &num);
        vetor[i]=num;
    }
 
    /// COMEÇAR A ORDENAR
 
    for(X=0;X<TAM;X++){
 
        for(Y=X+1;Y<TAM;Y++){///SEMPRE UM ELEMENTO A FRENTE
            if(vetor[X] > vetor[Y]){
 
                auxTROCA= vetor[X];
                vetor[X]= vetor[Y];
                vetor[Y]= auxTROCA;
 
            }
        }
    }
 
    for(i=0;i<TAM;i++)///ESCANEIA OS ELEMENTOS DO VETOR
    {
        printf("%d\n", vetor[i]);
    }
 
}
