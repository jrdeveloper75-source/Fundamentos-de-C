#include<stdio.h>
#include<stdlib.h>

int main(){
    int cantidad;

    printf("Ingrese la cantidad de elementos que desea almacenar:\n");
    scanf("%d", &cantidad);

    int *ptr = (int *) malloc(cantidad * sizeof(int)); // Reservamos memoria para 'cantidad' enteros

    if (ptr == NULL) { // Verificamos si la memoria fue reservada correctamente
        printf("Error al reservar memoria.\n");
        return 1; // Salimos del programa con un código de error
    }

    for(int i = 0; i < cantidad; i++){
        printf("Ingrese el valor para el elemento %d:\n", i+1);
        scanf("%d", ptr + i); // Almacenamos el valor ingresado en la memoria dinámica usando aritmética de punteros
    }

    printf("Valores almacenados en la memoria dinámica:\n");
    for(int i = 0; i < cantidad; i++){
        printf("%d\n", *(ptr + i)); // Imprimimos los valores almacenados usando aritmética de punteros
    }
    free(ptr); // Liberamos la memoria reservada
    return 0; // Salimos del programa con un código de éxito   
}