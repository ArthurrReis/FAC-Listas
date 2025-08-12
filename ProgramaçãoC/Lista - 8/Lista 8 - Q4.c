#include <stdio.h>
/* Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/

int mdc(int n1, int n2)
{
   int i, menor, maior, resposta; 
    if(n1 > n2) {
        menor = n2;
        maior = n1;
    } else {
        menor = n1;
        maior = n2; 
    }
    
    for (i = 1; i <= menor; i++) 
    {
        if(n1 % i == 0 && n2 % i == 0) 
            resposta = i;
    }
    return resposta;
}
   void main ()
{	
	//declaração de variáveis
	int numero1, numero2, resultado;
	
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &numero1, &numero2);
	
	resultado = mdc (numero1, numero2);
	
	printf ("\n\nMDC (%d,%d) = %d", numero1, numero2, resultado);

}