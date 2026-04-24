#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    printf("Quantos elementos iniciais? ");
    scanf("%d", &N);

    int *vetor = (int*) malloc(N * sizeof(int));

    printf("Digite os %d elementos:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNovo tamanho do vetor: ");
    scanf("%d", &M);

    vetor = (int*) realloc(vetor, M * sizeof(int));

    if (M > N) {
        printf("Digite os %d novos elementos:\n", M - N);
        for (int i = N; i < M; i++) {
            printf("Elemento %d: ", i + 1);
            scanf("%d", &vetor[i]);
        }
    }

    printf("\nElementos do vetor:\n");
    for (int i = 0; i < M; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}