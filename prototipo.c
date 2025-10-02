#include <stdio.h>
int quadrado(int);
int main(){
    int n1,n2;
    printf("entre com um numero inteiro");
    scanf("%d",&n1);
    n2=quadrado(n1);
    printf("O quadrado de %d e: %d",n1,n2);
    return 0;
}
int quadrado(int a){
    return a*a;
}