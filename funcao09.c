#include <stdio.h>

int main(){
    int Vet[5];int escolha;
    for(int i=0;i<5;i++){
        printf("Digite um numero");
        scanf("%d",&Vet[i]);
    }
    Printf("Digite um um numero de 0,1 ou 2");
    scanf("%d",&escolha)

    switch (escolha)
    {
    case 1:
        for(int i=0;i<5;i++){
            printf("\n%d\n",Vet[i]);
        }
        break;
    case 2:
            printf("")

    default:
        break;
    }
}