#include <stdio.h>
/* Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:
Exemplo 1: N = 3
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)
Exemplo 2: N = 5
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5
3) (5 4).*/

int numeros(int n)
{
   int i, j; 
    
    for (i=1; i<=n; i++) 
    {
      for (j=1;j<=n;j++)
      {
     if (i != j)
    {
     printf("(%d %d) ", i, j);
    }
      }

    }
 
}
   int main()
{	
	
	int n1;
	
	printf ("Entre com um numero: ");
	scanf ("%d", &n1);
	

 numeros(n1);

}