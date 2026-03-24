#include <stdio.h>
#include <stdlib.h>

void alocar(int **vetor, int tamanho) {
    *vetor = (int *) calloc(tamanho, sizeof(int));

    if (*vetor == NULL) {
        printf("Erro ao alocar!\n");
        exit(1);
    }
}

int main() {
    int *vetor;
    int n;

    printf("Tamanho inicial: ");
    scanf("%d", &n);

    alocar(&vetor, n);

    // Preencher
    printf("\nPreencha o vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Realloc
    int novo_n;
    printf("\n\nNovo tamanho: ");
    scanf("%d", &novo_n);

    int *temp = (int *) realloc(vetor, novo_n * sizeof(int));

    if (temp == NULL) {
        printf("Erro no realloc!\n");
        free(vetor);
        return 1;
    }

    vetor = temp;

    // Preencher novamente
    printf("\nPreencha novamente:\n");
    for (int i = 0; i < novo_n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores atualizados:\n");
    for (int i = 0; i < novo_n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}