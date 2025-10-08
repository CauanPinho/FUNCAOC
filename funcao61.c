/*. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida*/

#include <stdio.h>

int main(){
    int Matriz[5][5];
    int i,j;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            Matriz[i][j]=0;
            if (i==j){
                Matriz[i][j]=1;

            }
        }
    }
    for(int i=0;i<5;i++){
            printf("\n");

        for(int j=0;j<5;j++){
            printf("\n%d\n",Matriz[i][j]);


        }
    }
    printf("\n");
}