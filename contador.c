#include <stdio.h>

    void main() {
    int contador = 0;
    int i;

    printf("digite o numero: ");
    scanf("%d", &contador);

    for(i = 1; i <= contador; i++){
    printf("%d\n", i);
    }
    }