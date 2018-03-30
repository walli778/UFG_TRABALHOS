#include <stdio.h>

main () {

float fahrenheit, celcius, polegadas, mm, MM_PP = 25.4; //DECLARANDO AS VARIAVEIS, | NO CASO JA DECLAREI QUE 1 POLEGADA VALE 25.4 MM|

scanf("%f", &fahrenheit); //ESCANIANDO O QUANTOS GRAUS EM FAHNRENHEIT
scanf("%f", &polegadas); // ESCANIANDO QUANTAS POLEGADAS

celcius = (5*(fahrenheit - 32 ))/9; // CONVERSÃO DE FAHRNHEIT EM CELCIUS
mm = polegadas*MM_PP; // CONVERSAO DE POLEGADAS EM MM

printf (" O VALOR EM CELSIUS = %.2f\n", truncf(celcius*100.0)/100.0); // PRINTANDO NA TELA O VALOR EM CELCIUS
printf (" A QUANTIDADE DE CHUVA E = %.2f\n", truncf(mm*100.0)/100.0); // PRINTANDO NA TELA O VALOR EM MM


}
