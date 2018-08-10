#include <stdio.h>
 
main () {
 
    int sort[6],i,CASOS,X,Y;
    int sena=0,quina=0,quadra=0,sortudo=0;
 
    for (i=0;i<6;i++) scanf("%d", &sort[i]);
 
    scanf("%d", &CASOS);
    int vet[CASOS];
 
        for(i=0;i<CASOS;i++)
        {
            sortudo=0;
 
            for (X=0;X<6;X++) scanf("%d", &vet[X]);//escaneia o numero dde coisas q o cara jogo
 
            ///[1] COMEÇA A COMPARAR SE ACERTOU ALGUM NUMERO
            for (X=0;X<6;X++) //aki compara
            {
                for (Y=0;Y<6;Y++)
                {
                    if(sort[X]==vet[Y]) sortudo++;
                }
            }
            ///[2] ATRIBUI SE POSSUI GANHADORES NO SENA, QUINA OU QUADRA
            if(sortudo == 6){
                sena++;
            } else if(sortudo == 5){
                quina++;
            } else if (sortudo == 4){
                quadra++;
            }
        }
 
        if(sena==0) printf("Nao houve acertador para sena\n");
        else if (sena > 0) printf("Houve %d acertador(es) da sena\n", sena);
 
        if(quina==0) printf("Nao houve acertador para quina\n");
        else if (quina > 0) printf("Houve %d acertador(es) da quina\n", quina);
 
        if(quadra==0) printf("Nao houve acertador para quadra\n");
        else if (quadra > 0) printf("Houve %d acertador(es) da quadra\n", quadra);
 
}
