/*
[1] ACHANDO O DELTA
[2] CASO O DELTA SEJA MAIOR QUE 0, ACHARA AS DUAS RAIZES DISTINTAS
[3] CASO O DELTA SEJA 0, ACHARA A RAIZ UNICA
[4] CASO O DELTA SEJA MENOR QUE 0, RAIZ IMAGINARIA
[5] X1 E X2 SÃO AS RAIZES

*/


#include <stdio.h>
#include <math.h>

main () {

float a, b, c, delta, X1,X2;

scanf("%f %f %f", &a, &b, &c);

delta = (pow(b,2)) + (-4*c*a); //[1]

if (delta > 0) { //[2]

	printf("RAIZES DISTINTAS\n");

    X1 = ((-1*b) + sqrt(delta)) / (2*a);
    X2 = ((-1*b) - sqrt(delta)) / (2*a);

    if (X1>X2) {

        printf("X1 = %.2f\n", truncf(X2*100.0)/100.0);
        printf("X2 = %.2f\n", truncf(X1*100.0)/100.0);

        }else {
            printf("X1 = %.2f\n", truncf(X1*100.0)/100.0);
            printf("X2 = %.2f\n", truncf(X2*100.0)/100.0);
            }

    }else
        if (delta == 0) { //[3]

            printf("RAIZ UNICA\n");

            X1 = ((-1*b) + sqrt(delta)) / (2*a);
            	printf("X1 = %.2f\n", truncf(X1*100.0)/100.0);

        }else
            if (delta < 0) { //[4]

                printf("RAIZES IMAGINARIAS\n");
            }
}
