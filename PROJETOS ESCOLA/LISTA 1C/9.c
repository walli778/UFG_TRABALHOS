#include <stdio.h>

main () {

long int contador, n, multiplicador=1;

scanf("%d", &n);

for(contador = 1 ; contador<=n ; contador++) {

    multiplicador *= contador;
}

  printf("%d! =  %d", n,multiplicador);


}
