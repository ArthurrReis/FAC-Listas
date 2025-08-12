#include <stdio.h>
/*fazer uma função que dado um vetor de inteiros A, 
crie um Vetor B contando os elementos pares de A em seu início 
e os impares no final
Vetor A[] = {1,2,3,4,5,6,7,8,9,10}*/
    void organizar(int vetor1[], int vetor2[], int tamanho)
    {
   int pospar=0,  posimpar = tamanho-1, i;
   
    for(i=0; i<=tamanho-1;i++)
    {
        if (vetor1[i]%2==0)
        {
            vetor2[pospar] = vetor1[i];
            pospar++;
        }
        else 
        {
            vetor2[posimpar] = vetor1[i];
            posimpar--;
        }
    }
}

int main() 
{
    int vetor1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10];  
    int tamanho = 10, i; 
    
    organizar(vetor1, vetor2, tamanho);
    printf("Vetor original: \n");
   for(i=0; i<=tamanho-1; i++)
   {
   printf("%d ", vetor1[i]);
   }
   printf("\nO vetor organizado ficou: ");
   for(i=0; i<=tamanho-1;i++)
   {
       printf("%d ", vetor2[i]);
   }
   
}