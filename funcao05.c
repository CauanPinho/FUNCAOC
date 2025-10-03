#include <stdio.h>
void media(float a){ 
    printf("%f",a/3);
}
int main(){
    int soma;
    float VetAlunos[3];
    for(int i=0;i<3;i++){
        printf("digite sua nota e passe para o próximo aluno");
        scanf("%f",&VetAlunos[i]);
        
        soma+=VetAlunos[i];
        
    }
    media(soma);
return 0;
}