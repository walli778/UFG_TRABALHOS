#include <stdio.h>
 
main () {
 int n,guardaI,guardaNUM,i;
 
    do{
 
        scanf("%d", &n);
        int vet_MAX[n];
 
        for(i=0;i<n;i++){
            scanf("%d", &vet_MAX[i]);
        }
 
        for(i=0;i<n;i++){
            if(i==0){
                guardaNUM=vet_MAX[i];
                guardaI=i;
            }
            else if ((i!=0)&&(vet_MAX[i]>guardaNUM)){
                guardaNUM=vet_MAX[i];
                guardaI=i;
            }
        }
 
        if(n!=0){
            printf("%d %d\n", guardaI, guardaNUM);
        }
 
    }while(n!=0);
}
