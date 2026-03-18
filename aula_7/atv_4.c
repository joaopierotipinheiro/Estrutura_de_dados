#include <stdio.h>

int soma_pares = 0;
int matriz[3][3] = {
    {1,2,3},
    {1,6,9},
    {2,5,6}
};

int main () {
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] % 2 == 0){ //everifica o par
                soma_pares++;
            }
        }
    }
    printf("Quantidade de numeros pares: %d", soma_pares);
}
