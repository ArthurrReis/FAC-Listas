#include <stdio.h>

void main ()
{
	int i, a, b, c, menor, meio, maior;
	
	
	printf ("Entre com os tres numeros: ");
	
	scanf ("%d %d %d", &a, &b, &c);
	
	
	printf ("Entre com o codigo (1.Crescente;2.Decrescente;3.Maior no meio): ");
	scanf ("%d", &i);
	
	
	if ((a<b) && (a<c))
	{
		menor = a;
		
		if (b<c)
		{
			meio = b;
			maior = c;
		}
		else
		{
			meio = c;
			maior = b;
		}
	}
	else
	{
		if (b<c)
		{
			menor = b;

			if (a<c)
			{
				meio = a;
				maior = c;
			}
			else
			{
				meio = c;
				maior = a;
			}
		}
		else
		{
			menor = c;

			if (a<b)
			{
				meio = a;
				maior = b;
			}
			else
			{
				meio = b;
				maior = a;
			}
		}
	}
	

	switch (i)
	{
		case 1: 
		        printf ("\n\n%d %d %d", menor, meio, maior);
		        break;

		case 2:
		        printf ("\n\n%d %d %d", maior, meio, menor);
		        break;

		case 3:

		        printf ("\n\n%d %d %d", meio, maior, menor);
	}
}