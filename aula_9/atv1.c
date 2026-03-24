#include <stdio.h>
#include <stdlib.h>

int main() {

    int tam;
    float *notas;

    printf("Qual a quantidade de alunos na turma? \n");
    scanf("%d", &tam);

    notas = malloc(tam * sizeof(float));

    for(int i = 0; i < tam; i++){
        printf("Qual a nota do aluno [%d]?", i);
        scanf("%f", &notas[i]);
    }
    
    float somaNota = 0;   
    float media = 0;

    for(int i = 0; i < tam; i++){
        somaNota += notas[i];
    }

    media = somaNota / tam;
    
    printf("%.2f", media);

    float maiorNota = notas[0];
    float menorNota = notas[0];

    for (int i = 0; i < tam; i++){
        if(notas[i] < menorNota){
            menorNota = notas[i];
        }
    }
    for (int i = 0; i < tam; i++){
        if(notas[i] > maiorNota){
            maiorNota = notas[i];
        }
    }
    printf("\n A média das notas é: %.2f", media);
    printf("\n A maior nota das turmas é: %f", maiorNota);
    printf("\n A menor nota das turmas é: %f", menorNota);

}