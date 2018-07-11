#include <stdio.h>
#include <string.h>

struct lingua{

  char *pais[];
  char *felizNatal_lingua[];

};

typedef struct lingua TRADUTOR[24];

void gera_lista (TRADUTOR *regiao,const char **pais, const char **saudacao){

    int i;

    for (i=0; i<24; i++){

      regiao[i].pais = pais[i];
      regiao[i].felizNatal_lingua = felizNatal_lingua[i];

    }

}


main (){

  TRADUTOR PAIS[24];

  int n=0,cont=0;
  char compara[24];

  const char *pais[]={"brasil","alemanha","austria","coreia","espanha","grecia","estados-unidos","inglaterra","australia","portugal","suecia","turquia","argentina","chile","mexico","antardida","canada","irlanda","belgica","italia","libia","siria","marrocos","japao"};
  const char *saudacao[]={"Feliz Natal!","Frohliche Weihnachten!","Frohe Weihnacht!","Chuk Sung Tan!","Feliz Navidad!","Kala Christougena!","Merry Christmas!","Merry Christmas!","Merry Christmas!","Feliz Natal!","God Jul!","Mutlu Noeller","Feliz Navidad!","Feliz Navidad!","Feliz Navidad!","Merry Christmas!","Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!","Buon Natale!","Buon Natale!","Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!"};

  gera_lista(PAIS,pais,saudacao);

  while (scanf("%[^\n]",compara)!=EOF) {

    scanf("%[^\n]",compara);
    getchar();

    for (size_t i = 0; i < 24; i++) {
      if(strcmp(compara,PAIS[i].pais)==0){

        printf("%s\n", PAIS[i].felizNatal_lingua);
        cont++;
      }

      if(cont==0){
        printf("-- NOT FOUND --\n");
      }
    }

  }
}
