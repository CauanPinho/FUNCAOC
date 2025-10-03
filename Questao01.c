#include <stdio.h>

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o
vetor, o maior elemento e a posição que ele se encontra.*/


int main(){
    int maior;
    int VetA[10];
    printf("Digite um valor");
    scanf("%d",&VetA[0]);
    maior=VetA[0];
    for (int i=1;i<10;i++){
        printf("Digite um numero");
        scanf("%d",&VetA[i]);
        if (VetA[i]>maior)
            maior=VetA[i];
    }
printf("%d",maior);
return 0;
}