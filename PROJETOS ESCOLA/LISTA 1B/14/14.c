
#include <stdio.h>

main () {

	int dd,mm,aa, data, aux, fev;
	char *mescompleto [] = {"janeiro", "fevereiro", "marco" , "abril" , "maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"}; // mes completo

	scanf("%d", &data); //[1]

	dd = data/1000000;
	//printf ("dia %d\n", dd);
    mm = data%1000000/10000;
    //printf ("mes %d\n", mm);
    aa = data%1000000%10000;
    //printf ("ano\n %d", aa);


	if (( dd> 28)&&(mm ==2)) {
        printf ("Data invalida!\n");

        } else
            if ((mm==04 || (mm==06) || (mm==9) || (mm==11)) && (dd>30)){ //ESSES MESES VAO ATE 30 DIAS
            printf("Data invalida!");

            }else
                if (dd > 31){ //DIA MAIOR QUE 31
                printf("Data invalida!");

                }else
                    if (mm == 00) { //MES NAO PODE SER 0
                    printf("Data invalida!");

                    }else
                        if (aa == 00) { //ANO NAO PODE SER 0
                        printf("Data invalida!");

                        }else
                            if (dd == 00){ // DIA NAO PODE SER 0
                            printf("Data invalida!");

                            }else
                                if ((mm < 01) || (mm > 12)) {
                                printf("Data invalida!");

                                }else{
                                printf("%i de %s de %i\n",dd,mescompleto[mm-1],aa);
                                }

}
