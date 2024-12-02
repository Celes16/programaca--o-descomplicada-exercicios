#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], j = 0;

    printf("Digite 10 numeros inteiros no intervalo [0, 50]:\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("vetor1[%d]: ", i);
            scanf("%d", &vetor1[i]);
            if (vetor1[i] < 0 || vetor1[i] > 50) {
                printf("Numero fora do intervalo, digite novamente.\n");
            }
        } while (vetor1[i] < 0 || vetor1[i] > 50);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[j++] = vetor1[i];
        }
    }

    printf("\nVetor1 (original):\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%d %d\n", vetor1[i], i + 1 < 10 ? vetor1[i + 1] : 0); 
    }

    printf("\nVetor2 (números ímpares):\n");
    for (int i = 0; i < j; i += 2) {
        printf("%d %d\n", vetor2[i], i + 1 < j ? vetor2[i + 1] : 0);  
    }

    return 0;
}
