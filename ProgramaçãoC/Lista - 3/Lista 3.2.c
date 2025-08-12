
#include <stdio.h>

#define PI 3.14159

int main() {
    char figura;
    float area, valor1, valor2;
    
    printf("CALCULADORA DE AREAS\n");
    printf("[C]irculo\n");
    printf("[R]etangulo\n");
    printf("[Q]uadrado\n");
    printf("[T]riangulo\n");
    printf("Escolha a figura (C/R/Q/T): ");
    scanf(" %c", &figura);
    
    switch(figura) {
        case 'C':
        case 'c':
            printf("Digite o raio do circulo: ");
            scanf("%f", &valor1);
            area = PI * valor1 * valor1;
            printf("Area do circulo: %.2f\n", area);
            break;
            
        case 'R':
        case 'r':
            printf("Digite a base e altura do retangulo: ");
            scanf("%f %f", &valor1, &valor2);
            area = valor1 * valor2;
            printf("Area do retangulo: %.2f\n", area);
            break;
            
        case 'Q':
        case 'q':
            printf("Digite o lado do quadrado: ");
            scanf("%f", &valor1);
            area = valor1 * valor1;
            printf("Area do quadrado: %.2f\n", area);
            break;
            
        case 'T':
        case 't':
            printf("Digite a base e altura do triangulo: ");
            scanf("%f %f", &valor1, &valor2);
            area = (valor1 * valor2) / 2;
            printf("Area do triangulo: %.2f\n", area);
            break;
            
        default:
            printf("Opcao invalida! Programa encerrado.\n");
            return 1;
    }
    
    return 0;
}

