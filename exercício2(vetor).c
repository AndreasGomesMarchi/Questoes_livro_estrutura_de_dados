#include <stdio.h>

int main(){
    char Matriz[4][4];
    Matriz[0][0] = 'a';
    Matriz[0][1] = 'b';
    Matriz[0][2] = 'c';
    Matriz[0][3] = 'd';
    Matriz[1][0] = 'e';
    Matriz[1][1] = 'f';
    Matriz[1][2] = 'g';
    Matriz[1][3] = 'h';
    Matriz[2][0] = 'i';
    Matriz[2][1] = 'j';
    Matriz[2][2] = 'k';
    Matriz[2][3] = 'l';
    Matriz[3][0] = 'm';
    Matriz[3][1] = 'n';
    Matriz[3][2] = 'o';
    Matriz[3][3] = 'p';

    for(int i = 0; i < 4; i++){ //i é a linha
        for(int j = 0; j < 4; j++){ //j é a coluna
            printf("A letra na posicao [%d] [%d] e [%c]\n", i, j, Matriz[i][j]);
        }
    }
}