#include <stdio.h>
#include <stdlib.h>
 
main () {
 
    int NV=0,//Numero do vetor
        n=1,//TAMANHO DO VETOR
        k=0,//Número para verificar
        cont=0,//contador do verificador
        i=0;//contador do vetor
 
    do {
        scanf("%d", &n);//Escaniando o tamanho do vetor
 
    } while((n < 0) || (n > 1000));
 
        int v[n];//VETOR
            for(i=0;i<n;i++){ ///Ciclo para escania os valores do vetor
 
                scanf("%d", &NV);
                v[i]=NV;
            }
 
        scanf("%d", &k);//Número para verificar
            for(i=0;i<n;i++){
 
                if(v[i]>=k){
                    cont++;
                }
            }
        printf("%d\n", cont);
}