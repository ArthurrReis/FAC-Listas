//importação de bibliotecas
#include <stdio.h>

//implementação das funções
int fibonacci (int n)
{
	//declaração de variáveis	
	int i, a, b, c;
	
	if (n==1)
	{
		return 0;
	}
	else
	{
		if (n == 2)
		{
			return 1;
		}
		else
		{
			a = 0;
			b = 1;
			
			for (i=3;i<=n;i++)
			{	
				c = a + b;
				a = b;
				b = c;
			}
			
			return c;
		}
	}
}

void main ()
{	
	//declaração de variáveis
	int ordem, termo;

	printf ("Elemento desejado: ");
	scanf ("%d", &ordem);
	
	//chamando a função
	termo = fibonacci (ordem);	
	
	//exibindo o resultado
	printf ("\n\nElemento = %d", termo);
}

// Resolução do professor Léo