/*4. Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca
desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem
de “não encontrado”*/
#include <stdio.h>
int main(){
    int Matriz[20][20];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            scanf("%d",&Matriz[i][j]);
            if (Matriz[i][j]==7){
                printf("linha %d e coluna %d, vc achou o numero da sorte",i,j);

            }


        }
    }
}