#include <stdio.h>
 
main () {
 
    int vetor[5000],TAM,i=0;
    int X=0,Y=0,cont=0,unico;
 
    scanf("%d", &TAM);
 
    for(i=0 ; i < TAM ; i++){
        scanf("%d", &vetor[i]);
    }
 
    for(X=0 ; X < TAM ; X++){
        cont = 0;
        for(Y=0 ; Y < TAM ; Y++){///SEMPRE UMA POSIÇÃO A MAI
            if(vetor[Y] != vetor[X]){
                    cont++;
            }
        }
       if(cont == TAM-1){
            unico++;
        }
    }
 
    printf("%d", unico);
}
