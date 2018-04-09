#include <stdio.h>

 main () {

	int horas_charretes=0;
	float valor_aluguel=0;

	scanf("%d", &horas_charretes);

	if (horas_charretes%3 == 0) {
    valor_aluguel = (horas_charretes/3) * 10;
	printf("O VALOR A PAGAR E = %.2f\n", truncf(valor_aluguel*100.0)/100.0);

	} else  {
	valor_aluguel = ((horas_charretes/3)*10 + (horas_charretes%3)*5);
	printf("O VALOR A PAGAR E = %.2f\n", truncf(valor_aluguel*100.0)/100.0);
    }
}
