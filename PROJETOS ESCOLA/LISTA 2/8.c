#include <stdio.h>
#define MAX 32
 
main () {
 
    int num,
        aux_num,
        vet_bin[MAX],
        i=0,j=0;
 
        scanf("%d", &num);
 
        while (num > 0) {
 
            vet_bin[i] = num % 2;
            i++;
            num = num/2;
 
        }
        for(j = i-1;j >=0; j--){
            printf("%d", vet_bin[j]);
        }
 
}
