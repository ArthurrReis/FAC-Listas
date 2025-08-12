#include <stdio.h>

int main()
{
    float p, h, pf;

    printf("Coloque sua altura em metros: ");
    scanf("%f", &h);

    printf("Coloque seu peso em Kg: ");
    scanf("%f", &p);

    pf = p/(h*h);

    if (pf < 18.5) {
        printf("Voce esta abaixo do peso.");
    }
    else 
    if (pf < 25) {
        printf("Voce esta com seu peso ideal");
    }
    else 
    if (pf < 30) {
        printf("Voce esta com sobrepeso");
    }
    else 
    if (pf < 35) {
        printf("Voce esta com obesidade grau 1");
    }
    else 
    if (pf < 40) {
        printf("Voce esta com obesidade grau 2");
    }
    else {
        printf("Voce esta com obesidade grau 3");
    }

    return 0;
}