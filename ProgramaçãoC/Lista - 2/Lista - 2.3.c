#include <stdio.h>

int main()
{
   float preco, preco1, preco2, preco3;

   printf("Coloque o preço do produto: ");
   scanf("%f", &preco);

   preco1 = (preco * 0.9);
   printf("a) O valor à vista com 10%% de desconto é: %.2f\n", preco1);

   preco2 = preco / 5;
   printf("b) O valor parcelado sem juros em 5x é: %.2f (cada parcela)\n", preco2);

   preco3 = (preco * 1.2);
   printf("c) O valor com juros de 20%% e parcelado em 10x é: %.2f (total)\n", preco3);

   return 0;
}