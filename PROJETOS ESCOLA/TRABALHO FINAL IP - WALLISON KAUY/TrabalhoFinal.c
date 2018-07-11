/*
    ESTE CODIGO NAO ESTA RODANDO NO CODEBLOCKS 17.12 OU NO WINDOWS, ESTA DANDO process returned -1073741571 ( 0xc00000FD) - ERRO DE PILHA ALGO ASSIM, COMO NAO CONSIGUI RESOLVER
    RECOMENDO UTILIZAR O CODELOBKCS 16.04 NO UBUNTU.

    PARA A EXECUÇÃO DO CODIGO É NECESSARIO QUE ESTEJA HABILITADO UMA OTIMIZAÇÃO DO COMPILADOR, PARA QUE A EXECUÇÃO SEJA MAIS RAPIDA
    E EFICAZ PARA ISSO BASTA HABILITAR NA SUA IDE [-O3] ou [-O2];
    ESTE CODIGO SEM A APLICAÇÃO DA OTIMIZAÇAO DEMORARA EM MEDIA DE 10-15 MINUTOS!!, E COM A OTIMIZAÇÃO EM MEDIA 2 MINUTOS, POIS É TRISTE

    CodeBlocks 16.04 = Settings > Compiler > Global compiler settings > Compiler FLags > Optimization > marque a opção 'Optimize fully (for speed) [-O3]'
               E em Other compiler options copie e cole -Wno-unused-result
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct TERMO{

  int id;
  int frequencia;

};

struct classe{

  int id;
  int frequencia;
  struct classe *termos;

};

struct classe_teste{

  int id;
  double pct;
  struct classe_teste *termo;

};

struct ntcalc{

  int ntc[80000];

};

struct eq2{

  int id_classe;
  double Pc;

};

struct eqPCT{

  double Pct[61000];
  int id;

};

void TREINAR_CLASSIFICADOR (void){

  ///[VARIAVEIS REFERENTES A CRIAÇÃO, LOCAÇÃO E ESCANEAMENTO DAS LINHAS AO ARQUIVO]
  FILE *arquivo; //CRIANDO O ARQUIVO
  char link[] = "treino.txt"; //ARQUIVO A SER ABERTO
  size_t len = 10000;
  char *linha = (char*)malloc(len);

  ///[VARIAVEIS REFERENTES AO CONTROLADOR DA CLASSE E DO TERMO]
  int classe_todas[20000], ///VETOR PARA GUARDAR TODAS AS CLASSES
      classe_distinta[150], /// VETOR PARA GUARDAR AS CLASSES DISTINTAS
      classes_distintasSOMA=0, /// SOMANDO QUANTAS CLASSES DISTITNAS EXISTEM
      frequencia_SOMA=0, /// CONTROLADOR PARA SOMAR A FREQUENCIA DE UMA CLASSE
      frequencia_distinta[150], // VETOR PARA ATRIBUIR TODAS AS FREQUENCIAS AS SUAS DEVIDAS CLASSES
      tamanho_linha=0, //TAMANHO DA LINHA PARA O FOR
      termos_soma=0, // SOMA DOS TERMOS
      frequencia_soma=0,
      quantos_termos_tem=0,
      iguala=0;

  ///[ VARIAVEIS PARA OS TERMOS DISTINTOS ]
  int termos_distintos[61000],
      iguaisTERMO=0,
      termosDISTINTOS_SOMA=0,
      comeca=0,
      termina=0,
      testarei=0,
      auxtroca=0;

  ///[VARIAVEIS DE CONTROLE]
  int x=0,y=0,controle_linha=0,c,i;

  for ( x = 0; x < 61000; x++) {
    termos_distintos[x] = -1;
  }

  for ( x = 0; x < 150; x++) {
    classe_distinta[x] = -1;
  }


  struct ntcalc CALC_NTC[20];
  struct TERMO Gclasse_frequencia[20000];
  struct classe Gtermos;
  Gtermos.termos = (struct classe*)malloc(5000000*sizeof(struct classe));
 //_________________________________________________________________________________________//

  printf("\n");
  printf(" _______________________________________________________________________\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t    TREINAR UM CLASSIFICADOR NAIVE BAYES  \t\t|\n");
  printf("|_______________________________________________________________________|\n");
  printf("\n");

  printf("\t CARREGANDO .... 0%%  --- Inicializando Arquivos\n");

  ///[ REFERENTE A ABERTURA DO ARQUIVO ]
  arquivo = fopen(link,"r");
  if(arquivo == NULL){

    printf("[ERRO 501] ARQUIVO NAO ENCONTRADO, CERTIFIQUE QUE O NOME ESTA CORRETO  treino.txt , E VERIFIQUE SE O ARQUIVO ESTA NA PASTA DO PROGRAMA\n");
    exit (1);

  }
  else{
    /*
      ESSA PARTE DO CODIGO ESTA ESCANIANDO O ARQUIVO COM A FUNÇÃO 'GETLINE', DESSA FORMA
      ESTOU TRATANDO LINHA POR LINHA DO ARQUIVO, E USANDO A FUNÇÃO 'SSCANF', CONSIGO
      SCANIAR AS CLASSES, A PALAVRA E SUA FREQUENCIA
     */
    printf("\t CARREGANDO .... 10%% --- Lendo e Guardando o arquivo teste.txt\n");
    while(getline(&linha, &len, arquivo) > 0){

      tamanho_linha = strlen(linha);
      sscanf(linha, "%d", &classe_todas[controle_linha]); //CLASSE

      //ESCANIANDO OS TERMOS
      for(x=0; x < tamanho_linha; x++) {

        if(linha[x] == ' '){ //PALAVRA
          sscanf(linha+x, "%d", &Gtermos.termos[termos_soma].id); //PALAVRA
          for(y=0;y<61000;y++){
            if (Gtermos.termos[termos_soma].id == termos_distintos[y]) {
              iguaisTERMO++;
            }
            if(iguaisTERMO != 0){
             break;
           }
          }
          if(iguaisTERMO == 0){
            termos_distintos[termosDISTINTOS_SOMA] = Gtermos.termos[termos_soma].id;
            //printf("%d e ja tem %d\n", termos_distintos[termosDISTINTOS_SOMA],termosDISTINTOS_SOMA+1);
            termosDISTINTOS_SOMA++;
          }
          termos_soma++;
          quantos_termos_tem++;
          iguaisTERMO=0;
        }

        if(linha[x] == ':'){ //FREQUENCIA
          sscanf(linha+x, ":%d", &Gtermos.termos[frequencia_soma].frequencia); //FREQUENCIA
          frequencia_soma++;
        }

      }
      Gclasse_frequencia[controle_linha].id = classe_todas[controle_linha];
      Gclasse_frequencia[controle_linha].frequencia = quantos_termos_tem;
      quantos_termos_tem = 0;
      controle_linha++;

    }
    /*
      UMA VEZ QUE JA ACHEI AS CLASSES DISTITNAS |V| = termosDISTINTOS_SOMA
      E ESTA GUARDADO EM termos_distintos[termosDISTINTOS_SOMA] E LOGO EM BAIXO
      EU ORDENO O VETOR PARA FACILITAR O PROGRAMA A ACHA AS CLASESES
   */
    printf("\t CARREGANDO .... 20%% --- Ordenando os Termos Distintos\n");

    for ( x = 0; x < termosDISTINTOS_SOMA; x++) {
      for(y=x+1; y < termosDISTINTOS_SOMA; y++){
        if(termos_distintos[x] > termos_distintos[y]){
          auxtroca = termos_distintos[x];
          termos_distintos[x] = termos_distintos[y];
          termos_distintos[y] = auxtroca;
        }
      }
    }
    printf("\t CARREGANDO .... 30%% --- Calculando as Classes Distintas\n");
    //[ ] ESTA PARTE DO CODIGO PEGA TODOS AS CLASSES DISTINTAS
    for(x=0; x<controle_linha; x++){
      for(y=0; y<150; y++){
        if(classe_todas[x] == classe_distinta[y]){
           iguala++;
        }
        if(iguala != 0){
        break;
        }

      }
      if(iguala == 0){
        classe_distinta[classes_distintasSOMA] = classe_todas[x];
        classes_distintasSOMA++;
      }
      iguala=0;
    }
    printf("\t CARREGANDO .... 40%% --- Atribuindo as frequencias da classes\n");
    //[ ] ESTA PARTE DO CODIGO ATRIBUI AS FREQUENCIAS AS CLASSES
    for(x=0;x<classes_distintasSOMA;x++){
      for(y=0;y<controle_linha;y++){
        if(classe_distinta[x] == classe_todas[y]){
         frequencia_SOMA++;
        }
      }

      frequencia_distinta[x] = frequencia_SOMA;
      frequencia_SOMA=0;
    }

    struct classe registro[classes_distintasSOMA];
    struct eq2 CALC_PC[classes_distintasSOMA];
    struct eqPCT calc_pct[20];

    printf("\t CARREGANDO .... 50%% --- Guardando classes distintas e suas frequencia\n");
    // ATRIBUINDO AS CLASSES DISTINTAS E SUAS FREQUENCIAS PARA UMA STRUCT
    for ( x = 0; x < classes_distintasSOMA; x++) {

      registro[x].id = classe_distinta[x];
      registro[x].frequencia = frequencia_distinta[x];

    }

    int somatorio[classes_distintasSOMA];
    printf("\t CARREGANDO .... 60%% --- Calculando o Somatorio(t E V) N(t,c)\n");
    ///[ ACHANDO O SOMATORIO DAS CLAASSES (Somatorio(t E V) N(t,c))]
    for(x=0 ; x  < classes_distintasSOMA; x++){
      for ( y = 0; y < controle_linha ; y++) {
        if(registro[x].id == Gclasse_frequencia[y].id ) {

          for(c=0;c < y; c++){
            comeca += Gclasse_frequencia[c].frequencia;
          }
            termina = comeca + Gclasse_frequencia[y].frequencia;

          for(c = comeca; c < termina; c++){
            testarei+=Gtermos.termos[c].frequencia;
          }
        }
        comeca = 0;
        termina = 0;
      }
    somatorio[x] = testarei;
    testarei = 0;
  }


    comeca = 0;
    termina = 0;
    testarei=0;
    printf("\t CARREGANDO .... 70%% --- Calculando N(t,c)\n");
    ///[ ACHANDO O NTC]
    for ( y = 0; y < controle_linha ; y++) {
        for(c=0;c < y; c++){
        comeca += Gclasse_frequencia[c].frequencia;
        }
        termina = comeca + Gclasse_frequencia[y].frequencia;
        for(c = comeca; c < termina; c++){
            for(i = 0; i < termosDISTINTOS_SOMA; i++){
              if(Gtermos.termos[c].id == termos_distintos[i]){
                testarei = Gtermos.termos[c].frequencia;

              }
              x = classe_todas[y];
              CALC_NTC[x].ntc[i] += testarei;
              testarei = 0;
            }
        }

      comeca = 0;
      termina =0;
    }
    printf("\t CARREGANDO .... 80%% --- Calculando e gravando P(c|t)\n");
    //**************CALCULO P(C|T)***********************************************************

    FILE *arquivo_Pct;
    arquivo_Pct = fopen("PROBABILIDAES_Pct.txt", "w");

    for(x=0; x < classes_distintasSOMA; x++){
      fprintf(arquivo_Pct, "%d ", registro[x].id);
      for ( y = 0; y < termosDISTINTOS_SOMA; y++) {
        calc_pct[x].Pct[y] = (double)CALC_NTC[x].ntc[y] / (somatorio[x] + termosDISTINTOS_SOMA);
       fprintf(arquivo_Pct, "%d",termos_distintos[y]);
       fprintf(arquivo_Pct, ":%lf",calc_pct[x].Pct[y]);

       if(y < termosDISTINTOS_SOMA-1){
        fprintf(arquivo_Pct," ");
       }

      }
      fprintf(arquivo_Pct, "\n");
    }

    //******************/ 3 - [EQUACAO 2 P(C)]***********************************************
    printf("\t CARREGANDO .... 90%% --- Calculando e Gravando P(c)\n");
    FILE *arquivo_Pc;
    arquivo_Pc = fopen("PROBABILIDAES_Pc.txt", "w");

    for ( x = 0; x < classes_distintasSOMA; x++) {
      CALC_PC[x].id_classe = registro[x].id;
      CALC_PC[x].Pc = (double)registro[x].frequencia / (double)controle_linha;
      fprintf(arquivo_Pc,"%d %lf\n",CALC_PC[x].id_classe, CALC_PC[x].Pc);
    }

  }
   printf("\t CARREGANDO .... 100%% --- Concluido\n");

  fclose(arquivo);

}

void CLASSIFICAR_UM_ARQUIVO_TESTE(void){

  ///[VARIAVEIS REFERENTES A CRIAÇÃO, LOCAÇÃO E ESCANEAMENTO DAS LINHAS AO ARQUIVO]
  FILE *arquivo_teste; //CRIANDO O ARQUIVO
  FILE *Pct;
  FILE *Pc;
  char link[] = "teste.txt"; //ARQUIVO A SER ABERTO

  size_t len = 10000;
  char *linha = (char*)malloc(len);

  size_t len2 = 10000;
  char *linha2 = (char*)malloc(len2);

  size_t len3 = 10000000;
  char *linha3 = (char*)malloc(len3);

  int tamanho_linha=0,
      classe_todas[5000],
      controle_linha=0,
      termos_soma=0,
      frequencia_soma=0,
      tamanho_linha2=0,
      tamanho_linha3=0;

  int x,y,pc_soma=0,c=0,id_pctSOMA=0,id_pctPCT_SOMA=0,pctsoma=0,j,i;
  int guarda_pc_id[20],somaid=0,guarda_pct_id[20],comeca=0,termina=0,comecaTESTE=0,terminaTESTE=0,frequencia_pct[20],somandofrequenciapct=0;
  double guarda_pc[20], Pcd=0, calculo_pc=0, somatorioPct=0,guardaPcd=-10;
  int frequeciaTERMO[2000],frequenciaTERMOsoma=0,guardaMelhorC=0,acertou=0;

  struct classe_teste Gtermo;
  struct classe_teste Gtermo_frequenciaPCT;
  Gtermo.termo = (struct classe_teste*)malloc(5000000*sizeof(struct classe_teste));
  Gtermo_frequenciaPCT.termo = (struct classe_teste*)malloc(5000000*sizeof(struct classe_teste));

  printf("\n");
  printf(" _______________________________________________________________________\n");
  printf("|\t\t\t\t\t\t\t\t\t|\n");
  printf("|\t\t    CLASSIFICAR UM ARQUIVO TESTE  \t\t\t|\n");
  printf("|_______________________________________________________________________|\n");
  printf("\n");

  arquivo_teste = fopen(link,"r");
  Pct = fopen("PROBABILIDAES_Pct.txt","r");
  Pc = fopen("PROBABILIDAES_Pc.txt","r");
  if((arquivo_teste == NULL) && (Pct == NULL) && (Pc == NULL)){
    printf("[ERRO 501] ARQUIVO NAO ENCONTRADO, CERTIFIQUE QUE O NOME ESTA CORRETO  teste.txt, PROBABILIDAES_Pct.txt, PROBABILIDAES_Pc ,E VERIFIQUE SE O ARQUIVO ESTA NA PASTA DO PROGRAMA\n");
    exit (1);
  } else{

    while(getline(&linha2, &len2, Pc) > 0){
      sscanf(linha2, "%d", &guarda_pc_id[pc_soma]);
      tamanho_linha2 = strlen(linha2);
      for(y=0; y<tamanho_linha2; y++){
        if(linha2[y] == ' '){
          sscanf(linha2+y, "%lf", &guarda_pc[pc_soma]);
          pc_soma++;
        }
      }
      somaid++;
    }

    while(getline(&linha, &len, arquivo_teste) > 0){

      tamanho_linha = strlen(linha);
      sscanf(linha, "%d", &classe_todas[controle_linha]); //CLASSE

      //ESCANIANDO OS TERMOS
      for(x=0; x < tamanho_linha; x++){
        if(linha[x] == ' '){ //PALAVRA
          sscanf(linha+x, "%d", &Gtermo.termo[termos_soma].id); //PALAVRA
          termos_soma++;
          frequenciaTERMOsoma++;
        }
      }
      frequeciaTERMO[controle_linha] = frequenciaTERMOsoma;
      frequenciaTERMOsoma=0;

      for(c=0;c < controle_linha; c++){
            comecaTESTE +=  frequeciaTERMO[c];
          }
            terminaTESTE = comecaTESTE + frequeciaTERMO[controle_linha];

        rewind(Pct);
        pctsoma=0;
        id_pctSOMA=0;
        id_pctPCT_SOMA=0;
        somandofrequenciapct=0;
        comeca =0;
        termina=0;
        somatorioPct=0;

      while(getline(&linha3, &len3, Pct) > 0){
       sscanf(linha3,"%d", &guarda_pct_id[pctsoma]);
        tamanho_linha3 = strlen(linha3);
        for(y=0; y<tamanho_linha3;y++){
          if(linha3[y] == ' '){ //PALAVRA
            sscanf(linha3+y, "%d", &Gtermo_frequenciaPCT.termo[id_pctSOMA].id); //PALAVRA
            id_pctSOMA++;
            somandofrequenciapct++;
          }

          if(linha3[y] == ':'){ //FREQUENCIA
            sscanf(linha3+y, ":%lf", &Gtermo_frequenciaPCT.termo[id_pctPCT_SOMA].pct); //Pct
            id_pctPCT_SOMA++;
          }

        }
        comeca = 0;
        termina = 0;
        frequencia_pct[pctsoma] = somandofrequenciapct;
         somandofrequenciapct=0;

        for(c=0;c < pctsoma; c++){
            comeca += frequencia_pct[c];
          }
            termina = comeca + frequencia_pct[pctsoma];

        for(i=comecaTESTE;i<terminaTESTE;i++){
            for(j=comeca;j<termina;j++){
                if(Gtermo.termo[i].id == Gtermo_frequenciaPCT.termo[j].id){
                    somatorioPct+= Gtermo_frequenciaPCT.termo[j].pct;
                    //printf("%d %d \n", Gtermo.termo[i].id,Gtermo_frequenciaPCT.termo[j].id);
                }
            }
        }
        //printf("SOMATORIO %lf\n", somatorioPct);
        for(c=0;c<20;c++){
                if(guarda_pct_id[pctsoma] == guarda_pc_id[c]){
                    calculo_pc = guarda_pc[c];
                    //printf("%lf \n", guarda_pc[c]);
                }
            }

        Pcd = log10(calculo_pc) + log10(somatorioPct);
       // printf("CLASSE %d PCD = %lf\n",guarda_pct_id[pctsoma], Pcd);
         if(Pcd > guardaPcd){
            guardaPcd = Pcd;
            guardaMelhorC = guarda_pct_id[pctsoma];
         }

        pctsoma++;
        somatorioPct=0;

      }

      printf("\t\t\t NUMERO DA LINHA %d\n", controle_linha+1);
      printf("\t\t\t CLASSE INDICADA %d\n", guardaMelhorC);
      printf("\t\t\t CLASSE VERDADEIRA %d\n", classe_todas[controle_linha]);
      printf("\n");
        if(guardaMelhorC == classe_todas[controle_linha]){
            acertou++;
        }
      controle_linha++;
      comecaTESTE =0;
      terminaTESTE =0;

    }

    printf("\t\t\t A ACURACIA OBTIDA FOI = %.2lf%%", ((double)acertou/(double)controle_linha)*100);
    printf("\t\t\t NUM DE CLASSIFICAÇÕES CORRETAS  = %d",acertou);
    printf("\t\t\t NUM DE DOCUMENTO TESTE = %d", controle_linha);
  }
}

int main(void){

    int op;///GUARDA A OPCAO PARA O SWITCH

    printf("'_______________________________________________________________________'\n");
    printf("|\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\tTRABALHO FINAL INF-UFG 2018.1 \t\t\t|\n");
    printf("|\t\t\t  ALUNO: WALLISON KAUY L.A\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t   (1) TREINAR UM CLASSIFACOR NAIVE BAYES \t\t|\n");
    printf("|\t\t   (2) CLASSIFICAR UM ARQUIVO DE TESTE \t\t\t|\n");
    printf("|\t\t   (3) TERMINAR O PROGRAMA \t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t|\n");
    printf("|_______________________________________________________________________|\n");
    printf("\n\n");


    printf("\t\t\t   DIGITE UMA OPCAO: ");
    scanf("\t\t\t\t\t\t\t%d", &op);
    printf("\n\n********************************************************************************\n");

    switch (op){

      case 1:
        TREINAR_CLASSIFICADOR ();
      break;

      case 2:
        CLASSIFICAR_UM_ARQUIVO_TESTE();
      break;

      case 3:

      break;

     // default:
        //printf("DIGITE UMA OPCAO VALIDA\n");
      // break;
    }

    return 0;
}
