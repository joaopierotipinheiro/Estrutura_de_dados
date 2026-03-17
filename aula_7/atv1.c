int matriz_identidade [3] [3] = {
    {1,6,9},
    {2,5,6}
};

int main () {
    for (int i = 0; i < 3; i++){
        for (int j= 0; j < 3; j++){
            printf("%d ", matriz_identidade [i][j]);
        }
        printf("\n");
    }
}