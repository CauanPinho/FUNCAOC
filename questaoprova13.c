/*. Leia dois vetores de inteiros X e Y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
 Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição
em Y.
 Produto entre X e Y: multiplicação de cada elemento de X com o elemento da
mesma posição em Y.
 Diferença entre X e Y: todos os elementos de X que não existam em Y.
 Interseção entre X e Y: apenas os elementos que aparecem nos dois vetores.
 União entre X e Y: todos os elementos de X, e todos os elementos de Y que não
estão em X.*/

#include <stdio.h>

int main(){
    int X[5],Y[5];
    int i;
    int Soma,Subtração,Produto;
    for(int i=0;i<5;i++){
        printf("Digite um valor");
        scanf("%d",&X[i]);
    }
    for(int i=0;i<5;i++){
        printf("Digite um valor");
        scanf("%d",&Y[i]);
    }
    for(int i=0;i<5;i++){
        Soma=(X[i]+Y[i]);
        Subtração=(X[i]-Y[i]);
        Produto=(X[i]*Y[i]);
        printf("Nas posicoes numero: %d de ambos, a soma é %d\n",i,Soma);
        printf("Nas posicoes numero: %d de ambos, a Subtração é%d \n",i,Subtração);
        
    }

}