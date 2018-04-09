#include <stdio.h>
#include <math.h>

main () {

int x;

scanf("%d", &x);

	if (x<1) {
		x = x;
	} else if (x==1) {
		x=0;
	} else {
		x= pow(x,2);
	}
printf("Y = %d", x);

}
