#include <stdio.h>

int main() {
    float matriz[10][3];  
    int piorProva1 = 0, piorProva2 = 0, piorProva3 = 0;

    printf("Digite as notas de 10 alunos em 3 provas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        float piorNota = matriz[i][0];
        int provaPiorNota = 0;

        for (int j = 1; j < 3; j++) {
            if (matriz[i][j] < piorNota) {
                piorNota = matriz[i][j];
                provaPiorNota = j;
            }
        }

        if (provaPiorNota == 0) {
            piorProva1++;
        } else if (provaPiorNota == 1) {
            piorProva2++;
        } else {
            piorProva3++;
        }
    }

    printf("\nNumero de alunos com a pior nota na prova 1: %d\n", piorProva1);
    printf("Numero de alunos com a pior nota na prova 2: %d\n", piorProva2);
    printf("Numero de alunos com a pior nota na prova 3: %d\n", piorProva3);

    return 0;
}
