#include<stdio.h>

int main(){
    int numeros[] = {10, 20, 30, 40, 50};
    int *puntero = numeros; // Asignamos la dirección del primer elemento del arreglo al puntero

    printf("Valores del arreglo:\n");
    for(int i = 0; i < 5; i++){
        printf("numeros[%d] = %d\n", i+1, *(puntero + i)); // Imprimimos los valores apuntados por el puntero
    }

    return 0;
}