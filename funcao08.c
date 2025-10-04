#include <stdio.h>

int main(){
    int VetA[10];int VetB[10];int VetC[10];int j,i;
    for(int i=0;i<10;i++){
        printf("Digite um numero de A");
        scanf("%d",&VetA[i]);
    }
    for(int i=0;i<10;i++){
        printf("Digite um numero de B");
        scanf("%d",&VetB[i]);
    for(int j=0;j<10;j++){
        if (VetA[j] == VetB[i]){
            VetC[j]=VetA[i];
            for(int j=0;i<10;i++){
                printf("esse numero aparece igual%d\n ",VetC[j]);
}
            j++;

        }

    }

return 0;
    }
}