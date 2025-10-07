/*. Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.*/

#include <stdio.h>

int main(){
    int Matriz[2][2];
    int i,j;
    printf("Digite um numero");
    scanf("\n%d\n",&Matriz[i][j]);
    int Maior[i][j];
    Maior[i][j]=Matriz[i][j];

    for(i=1;i<2;i++){
        for(j=1;j<2;j++){
            scanf("\n%d\n",&Matriz[i][j]);
            if (Matriz[i][j]>Maior[i][j]){
                Maior[i][j]=Matriz[i][j];

            }


        }

    }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\n%d",Matriz[i][j]);

        }

    }
printf("%d",Matriz[i][j]);
return 0;

}