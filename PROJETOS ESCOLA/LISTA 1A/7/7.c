#include <stdio.h>

main () {

int horas, minutos, segundos, choras, cminutos, minutosTOTAL; //DECLARANDO AS VARIAVEIS

scanf("%d", &horas); // scaniando a variavel horas
scanf("%d", &minutos); // scaniando a variavel minutos
scanf("%d", &segundos); //scaniando a variavel segundos

choras = horas * 60 * 60; // convertendo horas em segundos
cminutos = minutos * 60; // convertendo minutos em segundos

minutosTOTAL = choras + cminutos + segundos; // somando o valor convertido em segundos, ou seja horas + minutos --> ja convertido + os segundos

printf("O TEMPO EM SEGUNDOS E= %d\n", minutosTOTAL); // printando na tela o resultado
}
