#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int *) malloc(5 * sizeof(int)); // Reservamos memoria para 5 enteros

    if (ptr == NULL) { // Verificamos si la memoria fue reservada correctamente
        printf("Error al reservar memoria.\n");
        return 1; // Salimos del programa con un código de error
    }

    ptr[0] = 10; // Asignamos valores a la memoria reservada
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    printf("Valores almacenados en la memoria dinámica:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", ptr[i]); // Imprimimos los valores almacenados
    }
    printf("\n");

    free(ptr); // Liberamos la memoria reservada
    return 0; // Salimos del programa con un código de éxito
}