/*63. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>

int main(){
    int Matriz[4][4];
    int MaioresVet[10];
    int cont=0;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            scanf("%d",&Matriz[i][j]);
            if(Matriz[i][j]>10){
                cont++;
            }


            }
        }
        printf("%d",cont);
return 0;

}
