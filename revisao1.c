#include <stdio.h>

int main(){
    int X[5];
    int Y[5];
    printf("Digite 5 elementos");
    //ler todos os elementos de X e Y,de forma independente
    for(int i=0;i<5;i++){
        scanf("%d",&X[i]);
    }
    printf("Digite 5 elementos");
    for(int i=0;i<5;i++){
        scanf("%d",&Y[i]);
    }
    printf("A Soma entre X E Y :");
    /* a soma dos elementos de x e y sao esses*/
    for(int i=0;i<5;i++){
        printf("%d",X[i]+Y[i]);
    }
    /* a subtração dos elementos de x e y sao esses */
    for(int i=0;i<5;i++){
        printf("%d",X[i]-Y[i]);
    }
    /*o produto dos elementos de x e y sao esses*/
    for(int i=0;i<5;i++){
        printf("%d",X[i]*Y[i]);        
    }
    // diferenca entre x e y
    for(int i=0;i<5;i++){
        int existe=0;
        for(int j=0;j<5;j++){
            if(X[i]==Y[i]){
                existe=1;
                break;

            }
        }
        if(!existe){
            printf("%d",X[i]);
        }
    }

}