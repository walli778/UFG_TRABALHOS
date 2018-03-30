#include <stdio.h>
#include <math.h>

main () {

double massa, aceleracao, tempo, veloEQ,espaEQ,wEQ, veloWMS; //DECALRANDO AS VARIAVEIS

scanf("%lf", &massa); //SCANIANDO A VARIAVEL MASSA
scanf("%lf", &aceleracao); //SCANIANDO A VARIAVEL ACELERAÇÃO
scanf("%lf", &tempo); // ESCANIANDO A VARIAVEL TEMPO

veloEQ = (aceleracao * tempo)*3.6; //DESCOBRINDO A VELOCIDADE EM km/h

espaEQ = (aceleracao * (tempo*tempo))/2; // DESCOBRINDO O ESPAÇO PERCORRIDO

veloWMS = (aceleracao * tempo); // DESCOBRINDO O VALOR DA VELOCIDADE EM M/S

wEQ = ((massa*1000)* pow(veloWMS,2))/2; // DESCOBRINDO O TRABALHO


printf("VELOCIDADE= %.2lf\n", truncf(veloEQ*100)/100); // PRINTANDO O RESULTADO DA VELOCIDADE

printf("ESPACO PERCORRIDO= %.2lf\n", truncf(espaEQ*100)/100); // PRINTANDO O RESULTADO DO ESPAÇO

printf("TRABALHO REALIZADO= %.2lf\n", truncf(wEQ*100.0)/100.0); // PRINTANDO O RESULTADO DO TRABALHO

}
