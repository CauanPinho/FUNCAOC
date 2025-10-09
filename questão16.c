#include <stdio.h>

int main(){
    int x[10];
    int num,i,j,repetido;
    printf("Digite 10 numeros diferentes \n");
    for(int i=0;i<10;i++){
        do{
            scanf("%d",&num);
            //verificar se ja foi digitado esse numero
            repetido=0;
            for(j=0;j<i;j++){
                if (x[j]==num){
                    repetido=1;
                    printf("Esse numero ja foi digitado ");
                    break;

                }
            }
         } while(repetido==1);
            x[i]=num;
        }
printf("aqui estão seus numeros nao repetidos");
for(int i=0;i<10;i++){
    printf("\n %d",x[i]);
}
return 0;
}