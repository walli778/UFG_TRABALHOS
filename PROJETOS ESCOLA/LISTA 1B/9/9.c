// IDEALIZADOR DA LOGICA DA QUESTÃO 9 DA LISTA 1B -- JOSHUA KIKO ABBATE <-- AJUDOU

//WALLISON KAUY

#include <stdio.h>

main () {

int num, unidade,dezena,centena,milhar;
char uu = ' ',dd = ' ',cc =' ',mm = ' ';

scanf("%d", &num);

if ((num < 0)||(num >> 9999 )) {

    printf("Numero invalido!");
} else {

    milhar = num/1000;
    centena = (num%1000)/100;
    dezena = (num%100)/ 10;
    unidade = num%10;

    if(milhar > 1) {
    mm = 's';
    }if(centena >1){
    cc = 's';
    }if(dezena >1){
    dd = 's';
    }if(unidade >1){
    uu = 's';
    }

        if ((milhar >=1) && (centena >=1) && (dezena >=1) && (unidade>=1)) { //1111
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d dezena%c + %d unidade%c = %d + %d + %d + %d", num, milhar,mm ,centena,cc, dezena,dd, unidade,uu, milhar*1000, centena*100, dezena*10, unidade);

        } else if ((milhar >=1) && (centena >=1) && (dezena >=1) && (unidade==0)) { //1110
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d dezena%c = %d + %d + %d", num, milhar,mm ,centena,cc, dezena,dd, milhar*1000, centena*100, dezena*10);

        } else if ((milhar >=1) && (centena >=1) && (dezena ==0) && (unidade==0)) { //1100
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c = %d + %d", num, milhar,mm ,centena,cc,milhar*1000, centena*100);

        } else if ((milhar >=1) && (centena ==0) && (dezena ==0) && (unidade==0)) { //1000
            printf("(quarta ordem) %d = %d unidade%c de milhar = %d", num, milhar,mm,milhar*1000);

        } else if ((milhar >=1) && (centena ==0) && (dezena >=1) && (unidade>=1)) { //1011
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d dezena%c + %d unidade%c = %d + %d + %d", num, milhar,mm, dezena,dd, unidade,uu, milhar*1000, dezena*10, unidade);

        } else if ((milhar >=1) && (centena ==0) && (dezena >=1) && (unidade==0)) { //1010
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d dezena%c = %d + %d ", num, milhar,mm, dezena,dd, milhar*1000, dezena*10);

        } else if ((milhar >=1) && (centena ==0) && (dezena ==0) && (unidade>=1)) { //1001
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d unidade%c = %d + %d", num, milhar,mm, unidade,uu, milhar*1000, unidade);

        } else if ((milhar >=1) && (centena >=1) && (dezena ==0) && (unidade>=1)) { //1101
            printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d unidade%c = %d + %d + %d", num, milhar,mm,centena,cc, unidade,uu, milhar*1000, centena*100 ,unidade);

        } else if ((milhar == 0) && (centena >=1) && (dezena >=1) && (unidade>=1)) { //111
            printf("(terceira ordem) %d = %d centena%c + %d dezena%c + %d unidade%c = %d + %d + %d", num,centena,cc,dezena,dd, unidade,uu,centena*100, dezena*10 ,unidade);

        } else if ((milhar == 0) && (centena >=1) && (dezena >=1) && (unidade==0)) { //110
            printf("(terceira ordem) %d = %d centena%c + %d dezena%c = %d + %d ", num,centena,cc,dezena,dd, centena*100, dezena*10);

        }else if ((milhar == 0) && (centena >=1) && (dezena ==0) && (unidade >=1)) { //101
            printf("(terceira ordem) %d = %d centena%c + %d unidade%c = %d + %d ", num,centena,cc,unidade,uu, centena*100, unidade);

        } else if ((milhar == 0) && (centena >=1) && (dezena ==0) && (unidade==0)) { //100
            printf("(terceira ordem) %d = %d centena%c = %d ",num,centena,cc, centena*100);

        } else if ((milhar == 0) && (centena ==0) && (dezena >= 1) && (unidade >= 1)) { //11
            printf("(segunda ordem) %d = %d dezena%c + %d unidade%c = %d + %d ",num,dezena,dd,unidade,uu,dezena*10,unidade);

        } else if ((milhar == 0) && (centena ==0) && (dezena >= 1) && (unidade == 0)) { //11
            printf("(segunda ordem) %d = %d dezena%c = %d",num,dezena,dd,dezena*10);

        } else {
            printf("(primeira ordem) %d = %d unidade%c = %d",num,unidade,uu,unidade);
            }


}
}

