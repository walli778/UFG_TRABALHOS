#include <stdio.h>

main () {

float mediapar=0, mediaimpar=0;
int n=1, somapar=0,somaimpar=0;
float qtdpar=0, qtdimpar=0;

while (n != 0) {

scanf("%d", &n);
    if ((n%2 == 0)&&(n != 0)) {
        qtdpar++;
        somapar += n;

    } else if (n%2 != 0){
        qtdimpar++;
        somaimpar += n;
        }
}

if ((somapar !=0) && (somaimpar != 0)) {
mediapar = somapar/qtdpar;
mediaimpar = somaimpar/qtdimpar;

} else if ((somapar == 0) && (somaimpar != 0)) {
mediapar = 0;
mediaimpar = somaimpar/qtdimpar;

} else {
mediapar = somapar/qtdpar;
mediaimpar = 0;
}

if((n!= 0)||(somapar != 0)||(somaimpar!=0)) {

printf("MEDIA PAR: %.2f\n", truncf(mediapar*100.0)/100.0);
printf("MEDIA IMPAR: %.2f\n", truncf(mediaimpar*100.0)/100.0);

}
}
