#include <stdio.h>

main () {

int i;
float a, b, c;

scanf("%d", &i);
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

if (i == 1) {

    if ((a <= b) && (a <= c)) { // O A É MENOR QUE O B - SE SIM
		if (c >= b) { // E O C É MAIOR QUE O B
			printf("%.2f %.2f %.2f" , truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100);

        } else if (c <= b) { // C É MAIOR QUE O A?
			printf("%.2f %.2f %.2f", truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100);
          }
    }

        else if ((b <= c) && (b <= a)) { // B MENOR QUE A
            if (c >= a) { // A MENOR QUE O C ENTAO B-A-C
			printf("%.2f %.2f %.2f", truncf(b*100)/100,truncf(a*100)/100,truncf(c*100)/100);

            } else if (a >= c) {
			printf("%.2f %.2f %.2f", truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100);
              }
        }

            else if ((c <= b) && (c <= a)) { //C MENOR QUE A
                if (b >= a)  {
                    printf("%.2f %.2f %.2f",truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100);

                } else if (a >= b)  {
                    printf("%.2f %.2f %.2f",truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100);

                }
            }

} else if (i == 2) {

    if ((a >= b) && (b >=c)){
    printf("%.2f %.2f %.2f" , truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100);

    }else if ((a >= c) && (c >= b)){
    printf("%.2f %.2f %.2f" , truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100);

    }else if ((b >= a) && (a >= c)){
    printf("%.2f %.2f %.2f" , truncf(b*100)/100, truncf(a*100)/100, truncf(c*100)/100);

    }else if ((b >= c) && (c >= a)){
    printf("%.2f %.2f %.2f" , truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100);

    }else if ((c >= a) && (a >= b)){
    printf("%.2f %.2f %.2f" , truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100);

    }else if ((c >= b) && (b >= a)){
    printf("%.2f %.2f %.2f" , truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100);

    }

} else if (i == 3) {

    if ((a >= b) && (b >=c)){
    printf("%.2f %.2f %.2f" , truncf(b*100)/100, truncf(a*100)/100, truncf(c*100)/100);

    }else if ((a >= c) && (c >= b)){
    printf("%.2f %.2f %.2f" , truncf(c*100)/100, truncf(a*100)/100, truncf(b*100)/100);

    }else if ((b >= a) && (a >= c)){
    printf("%.2f %.2f %.2f" , truncf(a*100)/100, truncf(b*100)/100, truncf(c*100)/100);

    }else if ((b >= c) && (c >= a)){
    printf("%.2f %.2f %.2f" , truncf(c*100)/100, truncf(b*100)/100, truncf(a*100)/100);

    }else if ((c >= a) && (a >= b)){
    printf("%.2f %.2f %.2f" , truncf(a*100)/100, truncf(c*100)/100, truncf(b*100)/100);

    }else if ((c >= b) && (b >= a)){
    printf("%.2f %.2f %.2f" , truncf(b*100)/100, truncf(c*100)/100, truncf(a*100)/100);

    }
}
}
