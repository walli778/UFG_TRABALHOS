#include <stdio.h>

main () {

	int n1,n2,n3,n4, SOMA;

	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);

if ((n1>n2)&&(n1>n3)&&(n1>n4)){

	SOMA = n2+n3+n4; //sem n1 -- CERTO
	printf("%d\n", SOMA);

	}else
		if ((n2>n1)&&(n2>n3)&&(n2>n4)){

			SOMA = n1+n3+n4; //sem o n2 -- CEERTO
			printf("%d\n", SOMA);

		}else
			if ((n3>n1)&&(n3>n2)&&(n3>n4)){

				SOMA = n1+n2+n4; //sem p n3
				printf("%d\n", SOMA);

			}else
				if ((n4>n1)&&(n4>n2)&&(n4>n3)){

					SOMA = n1+n2+n3; //sem o n4 -- CERTO
					printf("%d\n", SOMA);
				}
}
