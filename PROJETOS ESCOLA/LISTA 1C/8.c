#include <stdio.h>

main () {

int a, b,  ano, citA=0,citB=0;

scanf("%d %d", &a, &b);

citA = a;
citB = b;

while (a <= b) {

    citA = citA + (a*0.03);
    citB = citB + (b*0.015);

    a = citA;
    b = citB;

ano++;
}
printf("ANOS = %d\n", ano);
}
