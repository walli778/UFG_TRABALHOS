#include <stdio.h>
#include <math.h>

main () {

float a,b,c, perimetroTRI, areaTRAP;

scanf("%f %f %f", &a, &b, &c);


if ((a < b+c) && (b < a+c) && (c < a+b)) {

    perimetroTRI = a+b+c;
    printf("Perimetro = %.1f", truncf(perimetroTRI*10)/10);

} else {

    areaTRAP = (a+b)*c/2;
    printf("Area = %.1f", truncf(areaTRAP*10)/10);

    }
}
