#include <stdio.h>
 
main () {
 
 
    int TAM,i=0,X=0,Y=0,auxTROCA,num,auxMED;
    float CONV;
 
    scanf("%d", &TAM);
    int vetor[TAM];
 
    for(i=0;i<TAM;i++){
        scanf("%d", &num);
        vetor[i]=num;
    }
 
 
    for(X=0;X<TAM;X++){
 
        for(Y=X+1;Y<TAM;Y++){///SEMPRE UM ELEMENTO A FRENTE
            if(vetor[X] > vetor[Y]){
 
                auxTROCA= vetor[X];
                vetor[X]= vetor[Y];
                vetor[Y]= auxTROCA;
 
            }
        }
    }
 
    auxMED = TAM;
    if(auxMED%2==0){
       auxMED /= 2;
       CONV = (vetor[auxMED] + vetor[auxMED-1]);
       CONV /=2;
       printf("%.2f", CONV);
 
 
    }else {
       auxMED /= 2;
       CONV = vetor[auxMED];
       printf("%.2f", CONV);
    }
}
