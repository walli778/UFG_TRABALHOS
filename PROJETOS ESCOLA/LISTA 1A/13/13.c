#include <stdio.h>

float a,b,c,d,e,f, x, y; // DECLARANDO AS VARIAVEIS

main () {

scanf("%f", &a); 
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);
scanf("%f", &e);
scanf("%f", &f);

//ax + by = c
//dx + ey = f

/*		

 comentario (5) == sendo uma divisão de fração, para retirar o dedominador precisa | tirar o mmc antes e dps do sinal de = |, como no caso
 nao temos outro dedominador nas outras operações, e so multiplicar por d o (b e c).


  ax + by = c 															dx + ey = f    <-- isolando o x (1)
  a(f - (e*y))/d + by = c (3)	   <-- coloquei a equação -->			x = f - (e*y)/d  <-- substitur na primeira equação (2)
  (af - (a*e*y))/d + by = c (4)    <-- distributiva						
  af - (a*e*y) + bdy = cd (5)      <-- comentario (5)
  y = ((c*d) - (a*f)) / ((-a*e) + (b*d)) (6) <-- isolando o y

  (7) = como ja isolamos o y. o programa ja ira calcular
  (8) e ira substituir no x isolado
*/


y = ((c*d) - (a*f))/((-a*e) + (b*d)); //ACHANDO O Y
x = (f -(e*y))/d; // ACHANDO O X

printf("O VALOR DE X E= %.2f \n", truncf(x*100)/100); //PRINTNADO NA TELA O VALOR X 
printf("O VALOR DE Y E= %.2f \n", truncf(y*100)/100); //PRINTANDO NA TELA O VALOR DE Y

}
