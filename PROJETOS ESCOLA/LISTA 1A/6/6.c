#include <stdio.h>
#include <math.h>

main () {

float volume_piramide, ab, altura, aresta, X=sqrt(3),Y; //DECLARANDO AS VARIAVEIS, |X É A RAIZ USADA NO AB:

scanf("%f  %f", &altura, &aresta);//ESCANIANDO O VALOR DA ALTURA E DA ARETA

ab =  3*(aresta*aresta)*X/2; // FAZENDO O PRIMEIRO CALCULO, AREA DA BASE

volume_piramide = ab*altura*1/3; // CALCULANDO O VOLUME DA PIRAMIDE, COM O VALOR DA AREA DA BASE JA CALCULADO, PS ENCONTREI PROBLEMAS PARA FAZER O *(1/3)

printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", truncf(volume_piramide*100)/100); // PRINTANDO E ARRENDONDANDO COM A FUNÇÃO TRUNCF O VALOR DA AREA DA BASE




}
