#include <stdio.h>

main () {

int qPessoas, escola, salarioMINIMO=937, etnia;
float QSL, rendaBRUTA;

scanf("%f %d %d %d", &rendaBRUTA, &qPessoas, &escola, &etnia);

QSL = rendaBRUTA/salarioMINIMO;
QSL /= qPessoas;

if ((QSL <= 1.5) && (escola == 2) && (etnia == 4)) {
        printf("ALUNO COTISTA (L1)\n");

}else if ((QSL <= 1.5) && (escola == 2) && (etnia == 1,2,3)) {
        printf("ALUNO COTISTA (L2)\n");

}else if ((escola == 2) && (etnia == 4)) {
        printf("ALUNO COTISTA (L3)\n");

}else if ((escola == 2) && (etnia == 1,2,3)) {
        printf("ALUNO COTISTA (L4)\n");

} else {
        printf("ALUNO NAO COTISTA\n");
}
}
