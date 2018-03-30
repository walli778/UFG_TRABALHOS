#include <stdio.h>
 
main () {
 
float raio_lata, altura_lata, m2=100, area_cilindo , valor_custo, ac, al, pi=3.14159; //declarando as variaveis
 
scanf("%f", &raio_lata); // pegando o valor do raio
scanf("%f", &altura_lata); // pegando o valor da altura
 
ac= 2*(pi*(raio_lata*raio_lata)); // calculando a area do circulo
al= (2*pi*raio_lata*altura_lata); // calculando a area lateral
area_cilindo = ac + al; // calculando a area total
 
valor_custo = area_cilindo*m2; //calculando o valor do custo
 
printf("O VALOR DO CUSTO E = %.2f\n", truncf(valor_custo*100)/100); // printando na tela o valor do custo
 
}