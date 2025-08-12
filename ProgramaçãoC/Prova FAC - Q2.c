include <stdio.h>

void leituravalores(int *total, int *soma, int *media) {
    int a, cont = 0, contprimo = 0, somaprimo = 0;
    *soma = 0;
    *media = 0;
    
    do {
        printf("Entre com um valor: ");
        scanf("%d", &a);
        
        if(a != 0) {
            cont++;
            
            // Verifica se é par
            if(a % 2 == 0) {
                *soma += a;
            }
            
            // Verifica se é primo (para números > 1)
            if(a > 1) {
                int i = 2;
                int is_prime = 1; // Assume que é primo
                
                while(i * i <= a && is_prime) {
                    if(a % i == 0) {
                        is_prime = 0;
                    }
                    i++;
                }
                
                if(is_prime) {
                    somaprimo += a;
                    contprimo++;
                }
            }
        }
    } while(a != 0);
    
    *total = cont;
    if(contprimo > 0) {
        *media = somaprimo / contprimo;
    }
}

int main() {
    int somapar, mediaprimos, valores;
    
    leituravalores(&valores, &somapar, &mediaprimos);
    printf("O total de elementos lidos é: %d", valores);
    printf("\nA soma dos numeros pares é: %d", somapar);
    printf("\nA media dos numeros primos é: %d", mediaprimos);
    
    return 0;
}