#include <stdio.h>

int main() {
    float pesoT, pesoPl;
    int planeta;
    char *nomePlaneta;

    printf("Digite seu peso na Terra (em kg): ");
    scanf("%f", &pesoTerra);
    
    printf("\nEscolha um planeta:\n");
    printf("1 - Mercúrio\n");
    printf("2 - Vênus\n");
    printf("3 - Marte\n");
    printf("4 - Júpiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    printf("Digite o número do planeta: ");
    scanf("%d", &planeta);

    switch(planeta) {
        case 1:
            pesoPlaneta = (pesoTerra / 10) * 0.37;
            nomePlaneta = "Mercúrio";
            break;
        case 2:
            pesoPlaneta = (pesoTerra / 10) * 0.88;
            nomePlaneta = "Vênus";
            break;
        case 3:
            pesoPlaneta = (pesoTerra / 10) * 0.38;
            nomePlaneta = "Marte";
            break;
        case 4:
            pesoPlaneta = (pesoTerra / 10) * 2.64;
            nomePlaneta = "Júpiter";
            break;
        case 5:
            pesoPlaneta = (pesoTerra / 10) * 1.15;
            nomePlaneta = "Saturno";
            break;
        case 6:
            pesoPlaneta = (pesoTerra / 10) * 1.17;
            nomePlaneta = "Urano";
            break;
        default:
            printf("Número de planeta inválido!\n");
            return 1;
    }

    printf("\nSeu peso em %s seria: %.2f kg\n", nomePlaneta, pesoPlaneta);

    return 0;
}