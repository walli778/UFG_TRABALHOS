#include <stdio.h>

main () {

int ano;

scanf("%d", &ano);

	if ((ano%4==0)&&(ano%100!=0)) {
		printf("ANO BISSEXTO\n");

	} else if ((ano%100==0)&&(ano%400==0)) {
		printf("ANO BISSEXTO\n");

		} else {
			printf("ANO NAO BISSEXTO\n");
		}




}
