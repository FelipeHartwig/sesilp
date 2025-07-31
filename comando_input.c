#include <stdio.h>

void main(){
    
    int a = 5;
    int b = 10;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    
    int resultado = a * b;
    printf("\n");
    
    printf("o valor é: %d\n", resultado);
    printf("%d x %d = %d",a , b, resultado);

}