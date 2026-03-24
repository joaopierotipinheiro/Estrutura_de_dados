#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C;

    printf("Linhas: ");
    scanf("%d", &L);

    printf("Colunas: ");
    scanf("%d", &C);

    int **matriz = (int **) malloc(L * sizeof(int*));

    if (matriz == NULL) {
        printf("Erro!\n");
        return 1;
    }

    for (int i = 0; i < L; i++) {
        matriz[i] = (int *) malloc(C * sizeof(int));

        if (matriz[i] == NULL) {
            printf("Erro!\n");
            return 1;
        }
    }

    // Leitura
    printf("\nDigite os valores:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma das linhas
    for (int i = 0; i < L; i++) {
        int soma = 0;
        for (int j = 0; j < C; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    // Maior elemento
    int maior = matriz[0][0];

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior elemento: %d\n", maior);

    // Liberar memória
    for (int i = 0; i < L; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}