#include<stdio.h>

int main(){
    int enteros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declaración e inicialización del arreglo de enteros

    for(int contador = 0; contador < 10; contador++){
        printf("El valor del arreglo en la posición %d es: %d\n", contador, enteros[contador]);
    }

    return 0;
}