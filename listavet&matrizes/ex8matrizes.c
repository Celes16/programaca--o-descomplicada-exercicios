#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma = matriz[0][1] + matriz[0][2] + matriz[1][2];

    printf("A soma dos elementos acima da diagonal principal e: %d\n", soma);

    return 0;
}
