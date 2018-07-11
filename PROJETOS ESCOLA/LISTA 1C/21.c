#include <stdio.h>

main () {

int num1,num2,A1=0,B1=0,C1=0,A2,B2,C2,inv2,inv1;
int n,i;

scanf("%d", &n);

for(i=1;i<=n;i++){

scanf("%d %d", &num1, &num2);

    A1=num1/100;
    B1=num1/10%10;
    C1=num1%10;
    inv1=C1*100 + B1*10 + A1;

    A2=num2/100;
    B2=num2/10%10;
    C2=num2%10;
    inv2=C2*100 + B2*10 + A2;

if((num1!=num2)&&(A1!=0)&&(B1!=0)&&(C1!=0)&&(B2!=0)&&(C2!=0)&&(A2!=0)){
    if(inv1 > inv2) {
        printf("%d\n", inv1);
    }else{
        printf("%d\n", inv2);}}
}}
