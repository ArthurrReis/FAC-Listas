#include <stdio.h>

#include <stdio.h>

int main()
{
    int dia, mes, ano, dia1, mes1, ano1;

    printf("Digite a primeira data (Dia Mes Ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Digite a segunda data (Dia Mes Ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    if (ano1 < ano) {
        printf("A segunda data e mais antiga!");
    }
    else if (ano < ano1) {
        printf("A primeira data e mais antiga!");
    }
    else {
        if (mes1 < mes) {
            printf("A segunda data e mais antiga!");
        }
        else if (mes < mes1) {
            printf("A primeira data e mais antiga!");
        }
        else {
            if (dia1 < dia) {
                printf("A segunda data e mais antiga!");
            }
            else if (dia < dia1) {
                printf("A primeira data e mais antiga!");
            }
            else {
                printf("As datas sao iguais!");
            }
        }
    }

    return 0;
}