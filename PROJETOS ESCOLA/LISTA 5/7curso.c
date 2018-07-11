#include <stdio.h>

struct TABELA_CURSOS{

    int codigo_curso;
    double valor_credito;
    char nome_curso[100];

};

struct TABELA_ALUNOS{

    char aluno[500];
    int codigo_curso_aluno;
    int numero_credito;

};

main () {

    int n_cursos,i=0,m_alunos=0,ii=0;
    int x,y;

    ///[1]ESCANEIA OS CURSOS,MENSALIDADE E CODIGO
    scanf("%d",&n_cursos);
    getchar();
    struct TABELA_CURSOS preenchimento_curso[n_cursos];

    while(i!=n_cursos){

        scanf("%d %lf", &preenchimento_curso[i].codigo_curso, &preenchimento_curso[i].valor_credito);
        getchar();
        scanf("%[^\n]", preenchimento_curso[i].nome_curso);
        getchar();

      i++;
    }

    //printf("%d %lf %s\n", preenchimento_curso[0].codigo_curso,preenchimento_curso[0].valor_credito,preenchimento_curso[0].nome_curso);

    ///[2]ESCANEIA OS ALUNOS,MENSALIDADE E CODIGO
    i=0;
    scanf("%d",&m_alunos);
    getchar();
    struct TABELA_ALUNOS preenchimento_aluno[m_alunos];

    while(i!=m_alunos){

        scanf("%[^\n]", preenchimento_aluno[i].aluno);
        getchar();
        scanf("%d %d", &preenchimento_aluno[i].codigo_curso_aluno, &preenchimento_aluno[i].numero_credito);
        getchar();

      i++;
    }

   // printf("%s %d %d\n", preenchimento_aluno[0].aluno,preenchimento_aluno[0].codigo_curso_aluno, preenchimento_aluno[0].numero_credito);

   // printf("ESCANIOU OS ALUNOS\n");

    for(x=0;x<m_alunos;x++){
       // printf("a\n");
        for(y=0;y<n_cursos;y++){
           // printf("d\n");
            if(preenchimento_aluno[x].codigo_curso_aluno == preenchimento_curso[y].codigo_curso){
               // printf("c\n");
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", preenchimento_aluno[x].aluno, preenchimento_curso[y].nome_curso, preenchimento_aluno[x].numero_credito, preenchimento_curso[y].valor_credito, preenchimento_aluno[x].numero_credito*preenchimento_curso[y].valor_credito);
            }
        }
    }

}
