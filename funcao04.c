#include <stdio.h>

int main(){
    int VetRecebe[10],VetNegativo[10];
    for(int i=0;i<10;i++){
        printf("Digite um numero");
        scanf("%d",&VetRecebe[i]);
        if (VetRecebe[i]<0){
            VetRecebe[i]=0;
            printf("%d",VetRecebe[i]);
        }

    }
for(int i=0;i<10;i++){
    printf("%d\n",VetRecebe[i]);
}
}