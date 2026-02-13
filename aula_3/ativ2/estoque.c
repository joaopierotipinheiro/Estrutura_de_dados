#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int codigos[MAX], quantidades[MAX];
    char nomes[MAX][50];
    int total = 0, opcao, i, buscaCod, novaQtd, encontrado;

    do {
        printf("\n1-Cadastrar 2-Atualizar 3-Remover 4-Listar 0-Sair: ");
        scanf("%d", &opcao);

        if (opcao == 1 && total < MAX) {
            printf("Codigo: ");
            scanf("%d", &buscaCod);
            
            encontrado = 0;
            for(i=0; i<total; i++) if(codigos[i] == buscaCod) encontrado = 1;

            if (encontrado) {
                printf("Erro: Codigo ja existe!\n");
            } else {
                codigos[total] = buscaCod;
                printf("Nome: ");
                scanf("%s", nomes[total]);
                printf("Quantidade: ");
                scanf("%d", &quantidades[total]);
                if(quantidades[total] < 0) quantidades[total] = 0;
                total++;
            }
        } 
        else if (opcao == 2) {
            printf("Codigo para atualizar: ");
            scanf("%d", &buscaCod);
            for(i=0; i<total; i++) {
                if(codigos[i] == buscaCod) {
                    printf("Nova quantidade: ");
                    scanf("%d", &novaQtd);
                    if(novaQtd >= 0) quantidades[i] = novaQtd;
                    else printf("Erro: Quantidade negativa!\n");
                }
            }
        }
        else if (opcao == 3) {
            printf("Codigo para remover: ");
            scanf("%d", &buscaCod);
            for(i=0; i<total; i++) {
                if(codigos[i] == buscaCod) {

                    for(int j = i; j < total - 1; j++) {
                        codigos[j] = codigos[j+1];
                        quantidades[j] = quantidades[j+1];
                        strcpy(nomes[j], nomes[j+1]);
                    }
                    total--;
                    printf("Removido com sucesso.\n");
                    break;
                }
            }
        }
        else if (opcao == 4) {
            printf("\n--- ESTOQUE ATUAL ---\n");
            for(i=0; i<total; i++) {
                printf("Cod: %d | Nome: %s | Qtd: %d\n", codigos[i], nomes[i], quantidades[i]);
            }
        }

    } while (opcao != 0);

    return 0;
}