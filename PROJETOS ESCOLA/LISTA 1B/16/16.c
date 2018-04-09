#include <stdio.h>

main () {

int matricula, dependecias;
float salario_Minimo, salario_Funci, taxaImpo, impostoBRUTO, impostoLIQUIDO, resultado,test1,test2;

scanf("%d %f %d %f %f", &matricula, &salario_Minimo, &dependecias, &salario_Funci, &taxaImpo);


if (salario_Funci > salario_Minimo*12) {
	impostoBRUTO = salario_Funci*0.2;
}

if (salario_Funci > salario_Minimo*5) {
impostoBRUTO = salario_Funci*0.08;

} else
    impostoBRUTO = 0;


impostoLIQUIDO = (impostoBRUTO - (dependecias*300));
taxaImpo*= salario_Funci/100;
resultado = (impostoLIQUIDO - taxaImpo);


printf("MATRICULA = %d\n", matricula);
printf("IMPOSTO BRUTO = %.2f\n", truncf(impostoBRUTO*100.00)/100.00);
printf("IMPOSTO LIQUIDO = %.2f\n", truncf(impostoLIQUIDO*100.00)/100.00);
printf("RESULTADO = %.2f\n", truncf(resultado*100.00)/100.00);

if (resultado < 0) {

	printf("IMPOSTO A RECEBER");

} else
	if (resultado == 0) {

		printf("IMPOSTO QUITADO");

	} else {

		printf("IMPOSTO A PAGAR");
	}

}
