#include <stdio.h>

main () {

int i=1,x;
double n=0, S=0;

scanf("%d", &x);


if (x > 1) {

    while (i<=x) {
     n = i;
    S += 1/n;

    i++;
    }

    printf("%.6lf", trunc(S*1000000.0)/1000000.0);


} else {
    printf("Numero invalido!");
}
}
