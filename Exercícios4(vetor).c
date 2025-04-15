#include <stdio.h>

int main(){
    int Matriz[3][3];
    int valor = 0;
    int SomaLinha = 0;

    for(int i=0; i<3; i++){ //Colocar valores
        for(int j=0; j<3; j++){
            Matriz[i][j] = valor;
            valor++;
            printf("Teste: Matriz[%d][%d] = %d\n", i, j, Matriz[i][j]); 
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            SomaLinha += Matriz[i][j];
        }
        printf("A %d linha tem a soma de %d\n", i, SomaLinha);
        SomaLinha = 0;
    }
}