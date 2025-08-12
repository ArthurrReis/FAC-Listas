
#include <stdio.h>

int main()
{
    int km;
    float rd, preco, resulta, resultb;
    
    printf("Entre com o percurso da viagem (em Km): ");
    scanf("%d", &km);
    printf("Entre com quantos km por litro o carro faz: ");
    scanf("%f", &rd);
    printf("Entre com o preco do litro do combustivel: ");
    scanf("%f", &preco);

    resulta = (km / rd);
    resultb = resulta * preco;

    printf("Sua viagem gastara %.2f litros de combustivel\n", resulta);
    printf("Na sua viagem voce gastara R$ %.2f\n", resultb);

    return 0;
}