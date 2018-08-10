#include <stdio.h>
 
main () {
 
int n=0,v=0,i=0,o=0;
int x,z;
 
///PRIMEIRA PARTE DO PROGRAMA, NESTE SERA A LINHA 1 E 2
 
scanf("%d", &n);//INFORMA QUANTAS NUMEROS O CODIGO VAI TER
int m[n];//DECLARAND QUANTOS NUMEROS A VARIAVEL VAI GUARDAR
 
    for (i=0;i<n;i++) { // PRIMEIRO LAÇO PARA GUARDA OS NUMEROS
 
        scanf("%d", &x);//ESCANEIA E GUARDA SA PORRA
        m[i]=x;
            //printf("%d posição %d\n", m[i],i);
    }
 
 
///SEGUNDA PARTE DO PROGRAMA, NESTA CONTERA A LINHA 3
 
scanf("%d", &v);
 
    for (i=0;i<v;i++) {
        scanf("%d", &z);
 
        int aux = 0;
        for (o=0;o<n;o++) {
            if(m[o]==z){
                aux += 1;
            }
        }
 
    if(aux > 0){
        printf("ACHEI\n");
    }else
    printf("NAO ACHEI\n");
    }
}
