
#include <stdio.h>
 
main () {
 
float A,B, C, delta; //declarando as variaveis
 
scanf("%f", &A); //valor de a
scanf("%f", &B); //valor de b
scanf("%f", &C); //valor de c
 
delta= (B*B) - 4*A*C; //calculando o delta pela formula
 
printf("O VALOR DE DELTA E= %.2f\n", truncf(delta*100)/100); //printando na tela o valor de delta
 
}