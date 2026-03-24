#include <stdio.h>

float registro_metereologico[7][3];
float media_temperatura_diaria[7];
float media_turno[3];

int main () {

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 3; j++){
            printf("Insira um valor para a posicao: [%d][%d]", i, j);
            scanf(" %f", &registro_metereologico[i][j]);
        }
    }
    for (int i = 0; i < 7; i++){ 
        float soma_dia = 0; 

        for (int j = 0; j < 3; j++){ 
            soma_dia += registro_metereologico[i][j]; 
        }
        media_temperatura_diaria[i] = soma_dia / 3; 
    }

    for (int j = 0; j < 3; j++){ 
        float soma_turno = 0;

        for (int i = 0; i < 7; i++){
            soma_turno += registro_metereologico[i][j];
        }
        media_turno[j] = soma_turno / 7;
    }

    float dia_mais_quente = media_temperatura_diaria[0]; 
    
    for(int i = 1; i < 7; i++){ 
        if (media_temperatura_diaria[i] > dia_mais_quente){ 
            dia_mais_quente = media_temperatura_diaria[i]; 
        }
    }
    printf("Medias de temperatura diaria: \n"); 
    for (int i = 0; i < 7; i++){ 
            printf("%f\n", media_temperatura_diaria[i]);
    }
    printf("Medias de temperatura por turno: \n");
    for (int i = 0; i < 3; i++){
            printf("%f\n", media_turno[i]);
    }
    printf("\nMedia do dia mais quente: %f", dia_mais_quente);
}

