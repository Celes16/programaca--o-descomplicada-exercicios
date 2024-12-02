#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;

    printf("Digite 5 numeros reais para o vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }

    while (1) {
        printf("\nDigite o codigo (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            printf("Programa finalizado.\n");
            break;
        } else if (codigo == 1) {
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
        } else if (codigo == 2) {
            printf("Vetor na ordem inversa:\n");
            for (int i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
        } else {
            printf("Codigo invalido. Tente novamente.\n");
        }
    }

    return 0;
}
