/* 15
Classificação do Aço (+++)

Um certo aço é classificado de acordo com o resultado de três testes abaixo, que devem determinar se o
mesmo satisfaz às especificações:
1. Conteúdo de Carbono abaixo de 7.
2. Dureza Rockwell maior do que 50.
3. Resistência à tração maior do que 80.000 psi.
Ao aço é atribuído o grau “10” se passar por todos os testes; grau “9” se passar somente nos testes 1 e
2; grau “8” se passar no teste 1 apenas; grau “7” caso o aço não se enquadre nos graus, “10”, “9”, e “8”.
Desenvolver um programa que leia o conteúdo do carbono (CC), a dureza Rockwell (DR) e a resistência
à tração (RT) e fornece a classificação do aço.

*/
#include <stdio.h>

main () {

int CC, DR, RT;

scanf("%d", &CC);
scanf("%d", &DR);
scanf("%d", &RT);

if ((CC < 7) && (DR > 50) && (RT > 80000)) {

	printf("ACO DE GRAU = 10");

} else
	if ((CC < 7) && (DR > 50)) {

		printf("ACO DE GRAU = 9\n");

     } else
		if (CC < 7) {

			printf("ACO DE GRAU = 8\n");

		} else {

			printf("ACO DE GRAU = 7\n");

		}
}
