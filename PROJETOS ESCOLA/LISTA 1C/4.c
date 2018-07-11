#include <stdio.h>

main () {

int x,y;
int i=2; // controlador


scanf("%d %d", &x, &y);

if ( x%2 == 0 ) { //verifica se x é divisivel por 2

    printf("%d", x);

    while (i <= y) { //entao começa o ciclo somnando sempre 2
    x+=2;
    printf(" %d", x);

    i++;
    }

} else
    printf("O PRIMEIRO NUMERO NAO E PAR\n");// caso o x nao seja par




}
