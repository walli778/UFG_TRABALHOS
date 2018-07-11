#include <stdio.h>

main () {

float numero,iniciando, kais, incremento, x=1, Resultado;

scanf("%f %f %f %f", &numero,&iniciando, &kais, &incremento);

 printf("Tabuada de soma:\n");
 while  (x <= kais) {

 printf("%.2f + %.2f = %.2f\n", numero,iniciando, Resultado=numero + iniciando);

 iniciando += incremento;
 x++;
 }

iniciando = iniciando - (incremento*(x-1));//REINICIANDO O SISTEMA |voltando o iniciador ao seu valor de origem |
x = 1;//REINICIANDO O SISTEMA

  printf("Tabuada de subtracao:\n");
  while  (x <= kais) {

  printf("%.2f - %.2f = %.2f\n", numero,iniciando, Resultado=numero - iniciando);

  iniciando += incremento;
  x++;
  }

iniciando = iniciando - (incremento*(x-1));//REINICIANDO O SISTEMA |voltando o iniciador ao seu valor de origem |
x = 1;//REINICIANDO O SISTEMA

   printf("Tabuada de multiplicacao:\n");
   while  (x <= kais) {

   printf("%.2f x %.2f = %.2f\n", numero,iniciando, Resultado=numero * iniciando);

   iniciando += incremento;
   x++;
   }

iniciando = iniciando - (incremento*(x-1));//REINICIANDO O SISTEMA |voltando o iniciador ao seu valor de origem |
x = 1; //REINICIANDO O SISTEMA

    printf("Tabuada de divisao:\n");
    while  (x <= kais) {

    printf("%.2f / %.2f = %.2f\n", numero,iniciando, Resultado=numero / iniciando);

    iniciando += incremento;
    x++;
    }



}
