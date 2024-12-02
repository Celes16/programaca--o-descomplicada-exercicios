#include <stdio.h>

int main() {
    int vetor[8];
    int X, Y, soma;

    printf("Digite 8 valores inteiros para o vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posicao X (entre 0 e 7): ");
    scanf("%d", &X);
    printf("Digite a posicao Y (entre 0 e 7): ");
    scanf("%d", &Y);

    if (X < 0 || X > 7 || Y < 0 || Y > 7) {
        printf("Erro: as posicoes devem estar entre 0 e 7.\n");
        return 1;
    }

    soma = vetor[X] + vetor[Y];

    printf("A soma dos valores nas posicoes %d e %d e: %d\n", X, Y, soma);

    return 0;
}
