#include <stdio.h>

int estoque[2][5];
char nome_do_setor[2][30] = {"Almoxarifado", "Informática"}; 
char nome_dos_produtos[5][30] = {"Limpol", "Kiboa", "Bom Ar", "Memória RAM DDR5", "Core Ultra 5" }; 
int main () {

    for (int i = 0; i < 2; i++) { 
        printf("Setor %s\n", nome_do_setor[i]);

        for (int j = 0; j < 5; j++){
            printf("Digite a quantidade do produto %s: ", nome_dos_produtos[j]);
            scanf("%d", &estoque[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++){ 
        int somaSetor = 0;

        for (int j = 0; j < 5; j++){
            somaSetor += estoque[i][j];
        }
    printf("Total do setor %s: %d\n", nome_do_setor[i], somaSetor);
    }

    for(int j = 0; j < 5; j++){
        int somaProduto = 0; 

        for (int i = 0; i < 2; i++){ 
            somaProduto += estoque[i][j];
        }
    printf("Total do produto %s: %d\n", nome_dos_produtos[j], somaProduto);
    }

}

