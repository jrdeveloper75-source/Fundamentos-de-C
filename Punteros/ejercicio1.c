#include<stdio.h>

int main(){
    int a = 10;
    float b = 20.5;
    char c = 'A';
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);

    // Imprimir las direcciones de memoria de las variables
    printf("Dirección de a: %p\n", (void*)&a);
    printf("Dirección de b: %p\n", (void*)&b);
    printf("Dirección de c: %p\n", (void*)&c);

    return 0;
}