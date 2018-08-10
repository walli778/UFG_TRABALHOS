#include <stdio.h>
 
main () {
 
    int num,i,ziu,c=0,maior,menor;
    scanf("%d", &num);
    int vet[num],vetINV[num];
 
            for(i=0;i<num;i++){ //PRIMEIRO VETIR
                scanf("%d", &vet[i]);
            }
 
            for(i=num-1;i>=0;i--){//VETOR INVERTIDO
                ziu=vet[i];
                vetINV[c]=ziu;
                c++;
            }
 
            for(i=0;i<num;i++){///IMPRIMINDO O VETOR
                printf("%d ", vet[i]);
            }
 
            printf("\n");
 
            for(i=0;i<num;i++){///IMPRIMINDO O VETOR INVERTIDO
                printf("%d ", vetINV[i]);
            }
 
             printf("\n");
 
            for(i=0;i<num;i++){//MAIOR
               if(i==0){
                maior=vet[i];
               }else if(vet[i]>maior){
                maior=vet[i];
               }
            }
                printf("%d\n", maior);
 
            for(i=0;i<num;i++){//MENOR
               if(i==0){
                menor=vetINV[i];
               }else if(vetINV[i]<menor){
                menor=vet[i];
               }
            }
 
                printf("%d\n", menor);
 
}
