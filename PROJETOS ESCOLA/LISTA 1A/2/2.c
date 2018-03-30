#include<stdio.h>
#include<math.h>
 
 /*
    DESENVOLVIDO POR JÓSÉ NETO E COMENTADO POR WALLISON K.
 */
main(){
 
    float kWGasto, kW100,kWPreco, salarioM, custoConsumo, custoComDesconto; // declarando as variaveis
 
    scanf("%f",&salarioM); //escaniando o valor de salario
    scanf("%f",&kWGasto); //escaniando o valor de KW gasto na casa
 
    kW100 = (0.7 * salarioM); // calculando a porcentagem de 100 KW
    kWPreco = (kW100 / 100); // Descobrindo o preço por 1 KW
    custoConsumo = kWPreco * kWGasto; // Fazendo a multiplicação do KW gasto na casa e o Preço por cada Kw
 
    custoComDesconto = custoConsumo - (custoConsumo * 0.10); // fazendo o desconto de 10%
 
    printf("Custo por kW: R$ %.2f\n", truncf(kWPreco*100)/100); // printando na tela o preço de Kw
    printf("Custo do consumo: R$ %.2f\n",truncf(custoConsumo*100)/100); // printando na tela o cuto de Consumo
    printf("Custo com desconto: R$ %.2f\n",truncf(custoComDesconto*100)/100); // Printando na tela o valor do desconto
 
 
}