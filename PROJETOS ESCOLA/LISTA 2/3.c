#include <stdio.h>
 
main () {
 
    int n=0,i=0,num=0;
 
        do{
 
            scanf("%d", &n);
 
        } while(n > 5000);
 
    int v[n];
 
        for(i=0;i<n;i++){
 
            scanf("%d", &num);
            v[i]=num;
        }
 
        for(i=n-1;i>=0;i--){
 
            printf("%d ",v[i]);
        }
 
 
 
 
}