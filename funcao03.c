#include <stdio.h>

int main(){
    int vetRecebe[10],VetPares[10];
    int j=0;
    for (int i=0;i<10;i++){
        printf("Digite um numero ");
        scanf("%d",&vetRecebe[i]);
        if(vetRecebe[i] % 2 == 0){
            VetPares[j]=vetRecebe[i];
            j++;


        }



    }
for(int i = 0;i<j;i++){
    printf("%d\n",VetPares[i]);
}

}