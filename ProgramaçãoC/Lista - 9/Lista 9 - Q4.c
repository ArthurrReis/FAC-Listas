
#include <stdio.h>

/*A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3
4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot  logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.*/

void logaritmo (int a, int b, int *result)
{
 *result=1;
    do 
    {
        *result = ((*result)*a);
    }
    while ((*result)>=b);
}
    
    int main ()
    {
    
        int resposta, pequeno, grande;
        printf("Entre com os valores: ");
        scanf("%d %d", &pequeno, &grande);
        logaritmo(pequeno, grande, &resposta);
        printf("O valor aproximado e de: %d", resposta);
        
    }
    
    