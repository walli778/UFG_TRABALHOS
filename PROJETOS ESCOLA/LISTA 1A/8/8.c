#include <stdio.h>
#include <math.h>

main () {

float l1, l2, l3, area, T; //declarando as variaveis

scanf("%f", &l1); // scaniando o primeiro lado
scanf("%f", &l2); // scaniando o segundo lado
scanf("%f", &l3); // scaniando o terceiro lado

T = (l1 + l2 + l3)/2; // calculando o valor de T

area = sqrt(T*(T-l1)*(T-l2)*(T-l3)); // calculando o valor da area


printf("A AREA DO TRIANGULO E = %.2f\n", truncf(area*100)/100); // printando na tela a area do triangulo

}
