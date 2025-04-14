#include <stdio.h>

int main(){
    int vetor[10];
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;
    vetor[7] = 80;
    vetor[8] = 90;
    vetor[9] = 100;

    for(int i=0; i<10; i++){
        printf("%d\n", vetor[i]); 
    }
}