#include <stdio.h>

main () {

float salario, reajuste;

scanf("%f", &salario);

	if (salario <= 300) {
		reajuste = salario + (salario*0.5);
		printf("SALARIO COM REAJUSTE = %.2f\n", truncf(reajuste*100)/100);

	} else {
		reajuste = salario + (salario*0.3);
		printf("SALARIO COM REAJUSTE = %.2f\n", truncf(reajuste*100)/100);
        }
}
