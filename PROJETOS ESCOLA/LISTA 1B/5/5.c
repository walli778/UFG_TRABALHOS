#include <stdio.h>

main () {

float nota;

scanf("%f", &nota);

	if ((nota>=9) && (nota<=10)) {
		printf("NOTA = %.1f CONCEITO = A\n", truncf(nota*100)/100);

		} else if ((nota>=7.5) && (nota<9)) {
			printf("NOTA = %.1f CONCEITO = B\n", truncf(nota*100)/100);

			} else if ((nota>=6) && (nota<7.5)) {
				printf("NOTA = %.1f CONCEITO = C\n", truncf(nota*100)/100);

				} else
					printf("NOTA = %.1f CONCEITO = D\n", truncf(nota*100)/100);

}
