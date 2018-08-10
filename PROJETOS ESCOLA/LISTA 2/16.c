#include <stdio.h>
 
main (){
 
    int N,//alunos da turma
        K,//Minimo de presença
        i,
        contPRESENTE=0,//CONTROLADOR DE PRESENTES NA SALA DE AULA
        aula,
        TAM;//TAMANHO DO VETOR
 
     char *aulaCANCELADA [] = {"SIM","NAO"};
 
        scanf("%d", &N);
        scanf("%d", &K);
        int vetor[N];
 
        ///A < 0 | OBS HORARIO DE CHEGADA NAO POSITIVO INDICA QE O ALUNO CHEGO CEDO OU NA HORA
        ///A > 0 indica que o aluno chegou tarde
    if ((N,K>=0) && (N,K <=1000)){
       //[1]ESCANIANDO O VETOR
            for (i = 0; i < N; i++){
                scanf("%d", &vetor[i]);
            }
 
        //[2]CONTANDO OS VALORES <= 0
            for (i = 0; i < N; i++){
                if(vetor[i]<=0){
                    contPRESENTE++;
                }
            }
       /// printf("%d\n", contPRESENTE);
        //[3] ATRIBUINDO SE TERA AULA OU NAO
            if (contPRESENTE >= K){
                aula = 1;
 
            }
                else{
                    aula = 0;
                }
 
            printf("%s\n", aulaCANCELADA[aula]);
 
        //[4] CASO A AULA NAO SEJE CANCELADA, APARECEÇA O NUMERO DA CHAMADA AO CONTRARIO
            if(aula == 1) {
                for (i = N; i >= 0; i--){
                    if(vetor[i]<=0){
                        printf("%d\n", i+1);
                    }
                }
            }
    }
}
