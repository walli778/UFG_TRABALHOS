#include <stdio.h>

main () {

	float a,b,c,d;

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);

/* POSSIBILIDADES
	 1º a < b < c < d foi
	    a < c < b < d foi
	    a < d < b < c foi
		a < b < d < c foi
	    a < c < d < b foi
		a < d < c < b foi

	 2º
		b < a < c < d foi
	    b < c < a < d foi
	    b < d < a < c foi
		b < a < d < c foi
	    b < c < d < b foi
		b < d < c < a foi


	 3º c < a < b < d foi
	    c < b < a < d foi
	    c < d < a < b foi
		c < a < d < b foi
	    c < b < d < b foi
		c < d < b < a foi

    4º  d < a < b < c foi
	    d < b < a < c foi
	    d < c < a < b foi
		d < a < c < b foi
	    d < b < c < a foi
		d < c < b < a foi

*/


if ((a <= b) && (a <= c) && (a <= d)) { // O "A" É O MENOR DIGITO

		if ((d >= b) && (d >= c)) { // D MAIOR DIGITO
			if (c >= b) { // C 3 DIGITO
			printf("%.2f, %.2f, %.2f, %.2f", a, b, c, d), truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100, truncf(d*100)/100;

			} else if (b >= c) { // B 3 DIGITO
			printf("%.2f, %.2f, %.2f, %.2f", a, c, b, d), truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100, truncf(d*100)/100;
			}


        } else if ((c >= b) && (c >= d)) { // C MAIOR DIGITO
			if (b >= d) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", a, d, b, c), truncf(a*100)/100, truncf(d*100)/100, truncf(b*100)/100, truncf(c*100)/100;

			} else if (d >= b) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", a, b, d, c), truncf(a*100)/100, truncf(b*100)/100, truncf(d*100)/100, truncf(c*100)/100;
			}


		} else if ((b >= c) && (b >= d)) { // B MAIOR DIGITO
			if (c >= d) {
			printf("%.2f, %.2f, %.2f, %.2f", a, d, c, b), truncf(a*100)/100, truncf(d*100)/100, truncf(c*100)/100, truncf(b*100)/100;

			} else if (d >= c) {
			printf("%.2f, %.2f, %.2f, %.2f", a, c, d, b), truncf(a*100)/100, truncf(c*100)/100, truncf(d*100)/100, truncf(b*100)/100;
			}
        }
}

else if ((b <= c) && (b <= a) && (b <= d)) { // B MENOR DIGITO

		if ((d >= a) && (d >= c)) { // O "D" É O MAIOR 4 digito
			if (c >= b) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", b, a, c, d), truncf(b*100)/100, truncf(a*100)/100, truncf(c*100)/100, truncf(d*100)/100;

			} else if (a >= c) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", b, c, a, d), truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100, truncf(d*100)/100;
			}


        } else if ((c >= a) && (c >= d)) { // digito 4
			if (a >= d) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", b, d, a, c), truncf(b*100)/100, truncf(d*100)/100, truncf(a*100)/100, truncf(c*100)/100;

			} else if (d >= a) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", b, a, d, c), truncf(b*100)/100, truncf(a*100)/100, truncf(d*100)/100, truncf(c*100)/100;
			}


		} else if ((a >= c) && (a >= d)) { // digito 4
			if (c >= d) {
			printf("%.2f, %.2f, %.2f, %.2f", b, d, c, a), truncf(b*100)/100, truncf(d*100)/100, truncf(c*100)/100, truncf(a*100)/100;

			} else if (d >= c) {
			printf("%.2f, %.2f, %.2f, %.2f", b, c, d, a), truncf(b*100)/100, truncf(c*100)/100, truncf(d*100)/100, truncf(a*100)/100;
			}
        }

}

else if ((c <= b) && (c <= a) && (c <= d)) { // C O MENOR DIGITO

		if ((d >= a) && (d >= b)) { // O "D" É O MAIOR 4 digito
			if (b >= a) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", c, a, b, d), truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100, truncf(d*100)/100;

			} else if (a >= b) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", c, b, a, d), truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100, truncf(d*100)/100;
			}


        } else if ((b >= a) && (b >= d)) { // digito 4
			if (a >= d) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", c, d, a, b), truncf(c*100)/100, truncf(d*100)/100, truncf(a*100)/100, truncf(b*100)/100;

			} else if (d >= a) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", c, a, d, b), truncf(c*100)/100, truncf(a*100)/100, truncf(d*100)/100, truncf(b*100)/100;
			}


		} else if ((a >= b) && (a >= d)) { // digito 4
			if (b >= d) {
			printf("%.2f, %.2f, %.2f, %.2f", c, d, b, a), truncf(c*100)/100, truncf(d*100)/100, truncf(b*100)/100, truncf(a*100)/100;

			} else if (d >= b) {
			printf("%.2f, %.2f, %.2f, %.2f", c, b, d, a), truncf(c*100)/100, truncf(b*100)/100, truncf(d*100)/100, truncf(a*100)/100;
			}
        }

}

else if ((d <= b) && (d <= a) && (d <= c)) { // D MENOR DIGITO

		if ((c >= a) && (c >= b)) { // O "D" É O MAIOR 4 digito
			if (b >= a) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", d, a, b, c), truncf(d*100)/100, truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100;

			} else if (a >= b) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", d, b, a, c), truncf(d*100)/100, truncf(b*100)/100, truncf(a*100)/100, truncf(c*100)/100;
			}


        } else if ((b >= a) && (b >= c)) { // digito 4
			if (a >= c) { // //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", d, c, a, b), truncf(d*100)/100, truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100;

			} else if (c >= a) { //terceiro digito
			printf("%.2f, %.2f, %.2f, %.2f", d, a, c, b), truncf(d*100)/100, truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100;
			}


		} else if ((a >= b) && (a >= c)) { // digito 4
			if (b >= c) {
			printf("%.2f, %.2f, %.2f, %.2f", d, c, b, a), truncf(d*100)/100, truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100;

			} else if (c >= b) {
			printf("%.2f, %.2f, %.2f, %.2f", d, b, c, a), truncf(d*100)/100, truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100;
			}
        }

}
}


