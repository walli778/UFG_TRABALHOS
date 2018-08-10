#include<stdio.h>
 
main()
{
 
    int i, n, j, aux, a;
 
    scanf("%d",&n);
 
    int v[n], x=1, y=n;
 
    for (i=0; i<n; i++)
    {
 
        scanf("%d",&v[i]);
 
    }
 
    for(i=0; i<n; i++) // ordenação do vetor
    {
 
        for (j=i+1; j<n; j++)
        {
 
            if(v[i]>v[j])
            {
 
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
 
            }
 
        }
 
    }
 
    for (i=0; i<n; i++)
    {
 
        for (j=i+1; j<n; j++)
        {
 
            if (v[i]==v[j])
            {
 
                a=j;
                x=x+1;
 
            }
 
        }
 
        if (x>=2) // printa o ultimo elemento que se repete em sua posição
        {
 
            printf("%d\n",v[a]);
            x=1;
            i=a;
 
        }
 
        else // printa o elemento caso ele não tenha repetido
        {
 
            printf("%d\n",v[i]);
 
        }
 
    }
 
 
 
}
