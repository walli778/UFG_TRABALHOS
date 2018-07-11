#include <stdio.h>

main () {

//MP MEDIA DAS NOTAS DA PROVA
// ML MEDIA DAS CINCO LISTA
//NT A NOTA DO TRABALHO FINAL
// 128 horas0

int matricula, fim,a;
float p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0;// provas
float l1=0,l2=0,l3=0,l4=0,l5=0;//lista de exercicicio
int presenca=0;
float MP,ML,NT,NF, reversao=0;

while ((p1!=-1)&&(p2!=-1)&&(p3!=-1)&&(p4!=-1)&&(p5!=-1)&&(p6!=-1)&&(p7!=-1)&&(p8!=-1)&&(l1!=-1)&&(l2!=-1)&&(l3!=-1)&&(l4!=-1)&&(l5!=-1)&&(NT!=-1)&&(presenca!=-1)){
scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",&matricula, &p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8, &l1,&l2,&l3,&l4,&l5, &NT, &presenca);

if ((p1!=-1)&&(p2!=-1)&&(p3!=-1)&&(p4!=-1)&&(p5!=-1)&&(p6!=-1)&&(p7!=-1)&&(p8!=-1)&&(l1!=-1)&&(l2!=-1)&&(l3!=-1)&&(l4!=-1)&&(l5!=-1)&&(NT!=-1)&&(presenca!=-1)){

    MP = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
    ML = (l1+l2+l3+l4+l5)/5;

    reversao = presenca;
    reversao = reversao/128;

NF = ((0.7*MP) + (0.15*ML) + (0.15*NT));

    if((NF >= 6) && (reversao > 0.75)) {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula, truncf(NF*100)/100);

    }else if ((NF >= 6) && (reversao < 0.75)) {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n",matricula,truncf(NF*100)/100);

    }else if ((NF < 6) && (reversao > 0.75)) {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula, truncf(NF*100)/100);

    }else if ((NF < 6) && (reversao < 0.75)) {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, truncf(NF*100)/100);
    }
}
}
}
