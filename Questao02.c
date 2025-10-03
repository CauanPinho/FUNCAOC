    #include <stdio.h>

    int main(){
        int VetTotal[10];
        int VetImpares[10];
        int j=0; //aqui é  variante pra receber os impares
        for(int i=0;i<10;i++){
            printf("digite um numero");
            scanf("%d",&VetTotal[i]);
            if(VetTotal[i] % 2 != 0){
                VetImpares[j]=VetTotal[i];
                j++;
            

            }
        }
    
    for (int i=0;i<j;i++){
        printf("%d\n",VetImpares[i]);
    }
    return 0;
    }