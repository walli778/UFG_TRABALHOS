#include <stdio.h>
#include <math.h>

struct vetor{

  double u;
  double x;
  double y;
  double z;
  double A;

}trocaVET;

main (){

  int rep,i=0,x,y;
  double troca,trocaU,trocaX,trocaZ,trocaY;

  scanf("%d", &rep);
  struct vetor Ordena[rep];

  while(i!=rep){

    scanf("%lf %lf %lf %lf", &Ordena[i].u, &Ordena[i].x,&Ordena[i].y,&Ordena[i].z);
    Ordena[i].A = sqrt(pow(Ordena[i].u,2) + pow(Ordena[i].x,2) + pow(Ordena[i].y,2) + pow(Ordena[i].z,2));

    i++;
  }

  for ( x = 0; x < rep; x++) {
    for ( y= x+1; y < rep; y++) {
      if(Ordena[x].A > Ordena[y].A){

        trocaVET = Ordena[x];
        Ordena[x] = Ordena[y];
        Ordena[y] = trocaVET;

        /*
        troca = Ordena[x].A;
        Ordena[x].A = Ordena[y].A;
        Ordena[y].A = troca;

        trocaU = Ordena[x].u;
        Ordena[x].u = Ordena[y].u;
        Ordena[y].u = trocaU;

        trocaX = Ordena[x].x;
        Ordena[x].x = Ordena[y].x;
        Ordena[y].x = trocaX;

        trocaY = Ordena[x].y;
        Ordena[x].y = Ordena[y].y;
        Ordena[y].y = trocaY;

        trocaZ = Ordena[x].z;
        Ordena[x].z = Ordena[y].z;
        Ordena[y].z = trocaZ;
        */
      }
    }
  }

  i=0;
  while(i!=rep){

    printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", Ordena[i].u, Ordena[i].x,Ordena[i].y,Ordena[i].z,Ordena[i].A);

    i++;
  }
}
