#include <stdio.h>

main () {


float salarioMinimo, kWGasto, consumo, valorkW, kW100, desconto;

scanf("%f", &salarioMinimo);
scanf("%f", &kWGasto);

kW100 = (salarioMinimo*0.7);
valorkW = kW100 /100;
consumo = kWGasto*valorkW;
desconto = consumo - (consumo*0.1);

printf(" O VALOR EM REAIS DE CADA kW: %.2f \n ", truncf(valorkW*100)/100);
printf(" O VALOR DO CONSUMO É: %.2f\n", truncf(consumo*100)/100.0);
printf(" O VALOR DO DESCONTO É: %.2f\n", truncf(desconto*100)/100);




}
