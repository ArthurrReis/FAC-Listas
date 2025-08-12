#include <stdio.h>
    void organizar(int vetor1[], int vetor2[], int tamanho, int vetor3[])
    {
        int i, soma, j, posnova=0, novapos=0;
        tamanho= tamanho-1;
       
        
        for(i=0; i<=tamanho; i++)
        {
           vetor3[posnova] = vetor1[i];
           posnova++;
        }
       // talvez desse pra usar i e posnova se eu zerasse elas dps do for
        for(j=0; j<=tamanho; j++)
        {
            vetor3[novapos] = vetor3[novapos] + vetor2[j];
            novapos++;
        }
        
    }
int main() {
    int vetor1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[] = {1,2,3,4,5,6,7,8,9,10};  
    int vetor3[10];
    int tamanho = 10;  
    
    organizar(vetor1, vetor2, tamanho, vetor3);
    
    printf("Vetor1 original: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("Vetor2 original: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\nVetor final: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor3[i]);
    }
    
    return 0;
}