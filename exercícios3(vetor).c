#include <stdio.h>

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int num;

    printf("Coloque um numero: ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(num == vetor[i]){
            printf("O numero que voce colocou %d esta no vetor[%d]!", num, vetor[i]);
            break;
        }else{
            printf("O numero que voce colocou nao esta no vetor[%d]!\n", vetor[i]);
        }
    }
    
}