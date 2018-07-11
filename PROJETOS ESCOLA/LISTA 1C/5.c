#include <stdio.h>

main () {

int a1, razao, n, i=2, soma=0, PA , an;

scanf("%d %d %d", &a1, &razao, &n);
an = a1;
while (i <= n) {

    PA = an + razao;
//printf("%d\n", PA);
    an = PA;
    soma += PA;

i++;
}
printf("%d\n", soma+a1);
}
