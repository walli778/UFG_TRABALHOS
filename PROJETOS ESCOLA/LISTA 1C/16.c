#include <stdio.h>

main () {

int matricula=1,
    horasTRAB=1; //horas trabalhadas

float   VRH=1, ///valor que recebe por horas
        salario;//salario

while ((matricula != 0)&&(horasTRAB != 0)&&(VRH != 0)) {

    scanf("%d %d %f\n", &matricula, &horasTRAB, &VRH);

    salario = horasTRAB*VRH;

    if ((matricula != 0)&&(horasTRAB != 0)&&(VRH != 0)) {
        printf("%d %.2f\n", matricula, truncf(salario*100)/100);
    }
}


}
