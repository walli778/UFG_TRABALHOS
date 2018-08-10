#include <stdio.h>
 
main () {
    int casos_TESTES;
    int vetorCPF[10],i;
    int multip=0, B1=0,B2=0,X=1;
 
    scanf("%d", &casos_TESTES);
 
    do{
         /*
        RESETANDO O SISTEMA
        */
        multip = 0;
 
        for(i=0;i<11;i++)
        {
            scanf("%d", &vetorCPF[i]);
        }
// 7 3 3 1 8 4 6 8 0 9 6
// 0 1 2 3 4 5 6 7 8 9 10
 
        ///[2] DESCOBRINDO SE O DIGITO B1 VALE;
         for(i=0;i<9;i++)
        {
            multip += (vetorCPF[i] * (i+1));
 
        }
            //printf("B1 %d\n", multip);
 
            if(multip%11!=10){
                B1=multip%11;
            }else{
                B1=0;
            }
 
        /*
        RESETANDO O SISTEMA
        */
        multip = 0;
 
        ///[3] DESCOBRINDO SE O DIGITO B2 VALE;
         for(i=0;i<=9;i++)
        {
            multip += (vetorCPF[i] * (9-i));
        }
 
            if(multip%11!=10){
                B2=multip%11;
            }else{
                B2=0;
 
            }
        //printf("B2 %d\n", multip);
 
        if((B1 == vetorCPF[9]) && (B2 == vetorCPF[10])){
            printf("CPF valido\n");
 
        } else {
            printf("CPF invalido\n");
        }
 
                    X++;
    }while(X<=casos_TESTES);
}
