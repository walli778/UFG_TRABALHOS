#include <stdio.h>

main () {

int n1,n2,n3, A,B,C;
char l1,l2,l3;

scanf("%d %d %d\n", &n1, &n2, &n3);
scanf("%c%c%c", &l1, &l2, &l3);

//printf("l1 %c\n", l1);
//printf("l2 %c\n", l2);
//printf("l3 %c\n", l3);

if ((n1<n2) && (n2<n3)) {
    A = n1;
    B = n2;
    C = n3;

}else
    if ((n1<n3) && (n3<n2)) {
        A = n1;
        B = n3;
        C = n2;

    }else
        if ((n2<n1) && (n1<n3)) {
            A = n2;
            B = n1;
            C = n3;

        }else
            if ((n2<n3) && (n3<n1)) {
                A = n2;
                B = n3;
                C = n1;

            }else
                if ((n3<n1) && (n1<n2)) {
                    A = n3;
                    B = n1;
                    C = n2;

                }else
                    if ((n3<n2) && (n2<n1)) {
                        A = n3;
                        B = n2;
                        C = n1;

                    }

if ((l1 == 'A')&&(l2 == 'B')&&(l3 == 'C')){
    printf("%d %d %d\n", A, B, C);

}else
    if ((l1 == 'A')&&(l2 == 'C')&&(l3 == 'B')) {
       printf("%d %d %d\n", A, C, B);

    }else
    if ((l1 == 'B')&&(l2 == 'A')&&(l3 == 'C')) {
       printf("%d %d %d\n", B, A, C);

    }else
    if ((l1 == 'B')&&(l2 == 'C')&&(l3 == 'A')) {
       printf("%d %d %d\n", B, C, A);

    }else
    if ((l1 == 'C')&&(l2 == 'A')&&(l3 == 'B')) {
       printf("%d %d %d\n", C, A, B);

    }else
    if ((l1 == 'C')&&(l2 == 'B')&&(l3 == 'A')) {
       printf("%d %d %d\n", C, B, A);

    }


//printf("A %d\n", A);
//printf("B %d\n", B);
//printf("C %d\n", C);


/*a-b-c
a-c-b
b-a-c
b-c-a
c-a-b
c-b-a*/



}
