#include <stdio.h>

main () {

	float a,b,c;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

/* POSSIBILIDADES
	 1º a > b > c
	 	2º a > c > b
	 3º b > a > c
	 	4º b > c > a
	 5º c > a > b
	 	6º c > b > a

*/


if ((a <= b) && (a <= c)) { // O A É MENOR QUE O B - SE SIM
		if (c >= b) { // E O C É MAIOR QUE O B
			printf("%.2f, %.2f, %.2f", a, b, c), truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100;
        } else

        if (c <= b) { // C É MAIOR QUE O A?
			printf("%.2f, %.2f, %.2f", a, c, b), truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100;
        }
}

else if ((b <= c) && (b <= a)) { // B MENOR QUE A
		if (c >= a) { // A MENOR QUE O C ENTAO B-A-C
			printf("%.2f, %.2f, %.2f", b, a, c), truncf(b*100)/100,truncf(a*100)/100,truncf(c*100)/100;
		} else

		if (a >= c) {
			printf("%.2f, %.2f, %.2f", b, c, a), truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100;
        }
}

else if ((c <= b) && (c <= a)) { //C MENOR QUE A
		if (b >= a)  {
			printf("%.2f, %.2f, %.2f", c, a, b),truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100;
		} else

		if (a >= b)  {
			printf("%.2f, %.2f, %.2f", c, b, a), truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100;

        }
}

}
