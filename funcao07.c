#include <stdio.h>

int main(){
    int VetA[10];int VetB[10];int VetC[10];
    for(int i=0;i<10;i++){
        printf("Digite um valor de A\n");
        scanf("%d",&VetA[i]);
    }
    for(int i=0;i<10;i++){
        printf("Digite um valor de B\n");
        scanf("%d",&VetB[i]);

    }
    for(int i=0;i<10;i++){
        VetC[i]= VetA[i] - VetB[i];

    }
    for(int i=0;i<10;i++){
        printf("%d\n",VetC[i]);
    }
    
}