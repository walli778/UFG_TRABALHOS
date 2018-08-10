#include <stdio.h>
 
main () {
 
    int n,i,maior,indice,ultimaNOTA,vezes=0;
    scanf("%d", &n);
 
    int vet[n];
 
        for(i=0;i<n;i++){
            scanf("%d", &vet[i]);
        }
 
        for(i=0;i<n;i++){
            ultimaNOTA=vet[n-1];
 
            if(vet[i]==ultimaNOTA){
                vezes++;
            }
        }
 
        for(i=0;i<n;i++){
            if(i==0){
                maior=vet[i];
                indice=i;
            }else if(i!=0 && vet[i]>maior){
                maior=vet[i];
                indice=i;
            }
        }
        printf("Nota %d, %d vezes\n",ultimaNOTA,vezes);
        printf("Nota %d, indice %d\n",maior,indice);
}
