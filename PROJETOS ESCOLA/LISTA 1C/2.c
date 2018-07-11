#include <stdio.h>

main () {

int n,cont = 1;
float C,F;

/* C = CELCIUS
   F = FAHNRENHEIT */

scanf("%d", &n);

while (cont <= n) { //Ira Rodar ate o controle ser igual ao numero digitado

     scanf("%f", &F);

     C = (5 * (F - 32))/9;
     printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", F, truncf(C*100)/100);

     cont ++;//Numero de controle
}




}
