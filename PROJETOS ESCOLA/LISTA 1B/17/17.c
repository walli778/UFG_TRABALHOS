#include <stdio.h>

main () {


	int num=0, num2=0, d1=0, d2=0, d3=0, d4=0, d5=0, digitoIN=0;

		scanf("%d", &num);

		num2 = num;



if ((num2 >= 10000)&&(num2 <100000)) {

d5 = num2 % 10;
num2 = num2/10;

d4 = num2 % 10;
num2 = num2/10;

d3 = num2 % 10;
num2 = num2/10;

d2 = num2 % 10;
num2 = num2/10;

d1 = num2;


    }else
        if ((num2 >=1000)&&(num2 <10000)) {

            d4 = num2 % 10;
            num2 = num2/10;

            d3 = num2 % 10;
            num2 = num2/10;

            d2 = num2 % 10;
            num2 = num2/10;

            d1 = num2;

        }else
            if ((num2 >=100)&&(num2 <1000)) {

                d3 = num2 % 10;
                num2 = num2/10;

                d2 = num2 % 10;
                num2 = num2/10;

                d1 = num2;

            }else
                if ((num2 >=10)&&(num2 <100)) {

                    d2 = num2 % 10;
                    num2 = num2/10;

                    d1 = num2;

                }


digitoIN = ((d5*10000) + (d4*1000) + (d3*100) + (d2*10) + d1);


if (num > 100000) {
 printf("NUMERO INVALIDO");

} else
    if (num == digitoIN) {
        printf ("PALINDROMO");

    } else  {
       printf("NAO PALINDROMO");
        }
}
