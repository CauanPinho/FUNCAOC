/* aula emerson, funcoes= dividir em blocos menores
divisão
função que chama ela mesmo se chama recursividade
serve pra reaproveitar cdg*/
#include <stdio.h>
#include <stdlib.h>


int quadrado(int a){
    return a*a;

}
int main(){
    int n1,n2;
    // entrada de dados
    printf("entre com um numero:");
    scanf("%d",&n1);
    n2=quadrado(n1);
    printf("o valor do seu quadrado é: %d",n2);
    
    return 0;
}