#include <stdio.h>

main () {

int nPrimo, div=0, i = 1;

scanf("%i", &nPrimo);

if (nPrimo<0) {
    printf("Numero invalido!");

} else {

    while (i<= nPrimo) {
        if(nPrimo%i==0) {
            div++;}
        i++;
}
    if (div==2) {
        printf("PRIMO");
    } else {
        printf("NAO PRIMO");
            }
}
}
