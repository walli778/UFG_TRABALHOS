#include <stdio.h>
#include <math.h>

struct Complex{

  double imaginario;
  double real;

};

struct IMA_RE{

  struct Complex x1;
  struct Complex x2;

};

struct IMA_RE calc(float a, float b, float c){

  struct IMA_RE calc;
  double delta;

  delta = pow(b,2) + (-4*a*c);

  if(delta > 0){
    calc.x1.real = (-b + sqrt(delta)) / (2*a);
    calc.x2.real = (-b - sqrt(delta)) / (2*a);
  }

  else if(delta == 0){
    calc.x1.real = (-b + sqrt(delta)) / (2*a);
    calc.x2.real = (-b - sqrt(delta)) / (2*a);
  }

  else if(delta < 0){
    calc.x1.real = (-b) / (2*a);
    calc.x1.imaginario = (sqrt(delta)) / (2*a);
    calc.x2.real = (-b) / (2*a);
    calc.x2.imaginario = (-sqrt(delta)) / (2*a);;
  }

  return calc;

}

int main (void) {

  double a,b,c,raiz;

  scanf("%lf %lf %lf", &a, &b, &c);
  calc (a,b,c);

  return 0;
}
