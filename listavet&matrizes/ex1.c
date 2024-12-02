#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = A[0] + A[1] + A[5];
    printf("A soma dos valores A[0], A[1] e A[5] e: %d\n", soma);

    A[4] = 100;

    printf("Os valores do vetor A sao:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
