#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Quantos elementos deseja digitar? ");
    scanf("%d", &n);

    int vetor[n];
    int tamanhoAtual = n;

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for (i = 0; i < n; i++) printf("%d ", vetor[i]);

    for (i = 0; i < tamanhoAtual; i++) {
        for (j = i + 1; j < tamanhoAtual; j++) {

            if (vetor[i] == vetor[j]) {

                for (k = j; k < tamanhoAtual - 1; k++) {
                    vetor[k] = vetor[k + 1];
                }
                tamanhoAtual--; 
                j--; 
            }
        }
    }

    printf("\nVetor compactado: ");
    for (i = 0; i < tamanhoAtual; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}