#include <stdio.h>

main () {

float i,qtdINGRESSO,a;
float ValorIngresso, ValorInicial, ValorFinal,Prejuizo,Lucro;
float antLucro, b,c;

scanf("%f %f %f", &ValorIngresso, &ValorInicial, &ValorFinal);

if (ValorInicial > ValorFinal) {
    printf("INTERVALO INVALIDO");

}else {
    for (i=ValorInicial;i<=ValorFinal;i++){
        if(i < ValorIngresso){
            qtdINGRESSO = 120 + (((ValorIngresso-i)/0.50)*25);
        }else {
            qtdINGRESSO = 120 - (((i-ValorIngresso)/0.50)*30);
            }

    Prejuizo = 200 + (qtdINGRESSO*0.05);
    Lucro = (qtdINGRESSO*i) - Prejuizo;

        if (Lucro > antLucro) {
        a= qtdINGRESSO;
        b= Lucro;
        c= i;

            if (Lucro < 0){
            a=0;
            b=0;
            c=0;}}

    antLucro = Lucro;

    if ((ValorIngresso!=0)&&(ValorFinal!=0)) {
    printf("V: %.2f, N: %.0f, L: %.2f\n",i,qtdINGRESSO,truncf(Lucro*100)/100);
    }}
    if ((ValorIngresso!=0)&&(ValorFinal!=0)) {
    printf("Melhor valor final: %.2f\nLucro: %.2f\nNumero de ingressos: %.0f",c,b,a);
    }
}
}
