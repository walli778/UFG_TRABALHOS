#include <stdio.h>

main () {

char tipo_conta;
int nconta=0;
float cosumo=0, calculo=0;

scanf("%d %f %c", &nconta, &cosumo, &tipo_conta);

	switch (tipo_conta) {

			case 'R':
				calculo = 5 + (cosumo*0.3);
				printf("CONTA = %d\n", nconta);
				printf("VALOR DA CONTA = %.2f\n", truncf(calculo*100.0)/100.0);
			break;

			case 'I':
				calculo = 800 + ((cosumo-100)*0.04);
				printf("CONTA = %d\n", nconta);
				printf("VALOR DA CONTA = %.2f\n", truncf(calculo*100.0)/100.0);
			break;

			case 'C':
				calculo = 500 + ((cosumo-80)*0.25);
				printf("CONTA = %d\n", nconta);
				printf("VALOR DA CONTA = %.2f\n", truncf(calculo*100.0)/100.0);
			break;

			}
}
