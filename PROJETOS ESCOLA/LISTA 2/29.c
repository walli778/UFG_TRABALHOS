#include <stdio.h>
 
main () {
 
    int TAM_Q1,TAM_Q2,num;
    int X=0,//PRO PRIMEIRO FOR
        Y=0,//SEGUNDO FOR
        aux_TROCA=0;
 
    int vetor_Q1[5000];
    int vetor_Q2[5000];
    int vetor_Q1e2[5000];
 
        scanf("%d", &TAM_Q1);//Q1
        scanf("%d", &TAM_Q2);//Q2
 
    for(X=0;X<TAM_Q1;X++){///Q1
        scanf("%d", &vetor_Q1[X]);
        vetor_Q1e2[X] = vetor_Q1[X];
    }
    /// valor    1 2 3 4 5
    /// posicao  0 1 2 3 4   || x=4
 
    for(Y=0;Y<TAM_Q2;Y++){///Q2
        scanf("%d", &vetor_Q2[Y]);
         vetor_Q1e2[X+Y] = vetor_Q2[Y];
 
 
         /// valor    6 7 8 9 10
         ///posicao   5 6 7 8 9
    }
 
     for(X=0;X < TAM_Q1 + TAM_Q2 ;X++){
 
         for(Y=X+1;Y < TAM_Q1 + TAM_Q2 ;Y++){
            if(vetor_Q1e2[X] > vetor_Q1e2[Y]){
 
                aux_TROCA = vetor_Q1e2[X];
                vetor_Q1e2[X] = vetor_Q1e2[Y];
                vetor_Q1e2[Y] = aux_TROCA;
 
            }
         }
     }
 
     for(X=0;X < TAM_Q1 + TAM_Q2;X++){
        printf("%d\n", vetor_Q1e2[X]);
    }
}
