#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a; // Declaramos un puntero p que apunta a la dirección de memoria de a

    printf("Valor de a: %d\n", a);
    printf("Valor de a utilizando el puntero p: %d\n", *p); // Desreferenciamos el puntero p para obtener el valor de a

    *p = 20; // Modificamos el valor de a utilizando el puntero p
    printf("Nuevo valor de a: %d\n", a);
    return 0;
}