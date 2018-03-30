#include <stdio.h>

main () {

int n1, n2, n3, ni; // variaveis

scanf("%i", &n1); //escania o primeiro numero
scanf("%i", &n2); //escania o segundo numero
scanf("%i", &n3); //escania o 3 numero

if ((n1<=9)&&(n2<=9)&&(n3<=9)) { // LOGICA, TODOS OS NUMEROS TEM QUE SER MAIOR OU IGUAL A 9, SE NAO ATINGIR ESSA CONDIÇÃO IRA DAR MSG DE DIGITO INVALIDO - &&(TRUE E TRUE)

    ni = n1*100 + n2*10 + n3*1; // PARA A COMPOSIÇÃO DO ALGORISMO DE 3 DIGITOS
    printf("%i, %i", ni, ni*ni); // PRINTADO O NÚMERO DE 3 DIGITOS E O DIGITO AO QUADRADO

} else {
 printf("DIGITO INVALIDO");// CASO A CONDIÇÃO IF NAO SEJA ATENDIDA
    }
}
