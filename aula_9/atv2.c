#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *) calloc(n, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("\nVetor inicial (zeros):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nDigite novos valores:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor atualizado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}