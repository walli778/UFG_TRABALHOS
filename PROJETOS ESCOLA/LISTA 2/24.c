#include <stdlib.h>
#include <time.h>
 
void coutingSort(int *A, int n, int *B, int *C, int k)
{
int i;
 
//Passo 1
for(i=0;i<n;i++)
{
C[A[i]]++;
}
 
//Passo 2
for(i=1;i<k;i++)
{
C[i] += C[i-1];
}
 
//Passo 3
for(i=n-1;i>=0;i--)
{
B[C[A[i]]] = A[i];
C[A[i]]--;
}
}
 
    int main() {
    int i, tam, y, maior = 0;
 
    do{
        scanf("%i", &tam);
 
        int vetA[tam], vetB[tam];// vetC[maior];
        srand(time(NULL));
        for(i=0; i<tam; i++) //Adiciona valores aleatorios no vetor vetA
        {
            scanf("%d",&vetA[i]);
        }
 
        for(i=0; i<tam; i++) //Zera o vetor vetB
        {
        vetB[i] = 0;
        //vetC[i] = 0;
        }
 
        for(i=0; i<tam; i++)
        {
        if(vetA[i] > maior)
        {
        maior = vetA[i];
        }
        }
 
        int vetC[maior+1];
        for (i=0;i<maior+1; i++)
        vetC[i]=0;
 
        coutingSort(vetA, tam, vetB, vetC, maior+1);
 
        for(i=1;i<=tam;i++)
        {
        printf("%d ", vetB[i]);
        }
        printf("\n");
 
    }while(tam!=0);
 
    }
