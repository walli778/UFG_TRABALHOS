//i = contador

#include <stdio.h>

main () {

int n,i=2,x=0;
scanf("%d", &n);

if((n > 5) && (n <2000)) {
    while(i <= n) {

        x = i*i;
        printf("%d^2 = %d\n", i, x);

        if (i%2 == 0) {
            i = i +2;
        } else
            i++;
    }
}

}
