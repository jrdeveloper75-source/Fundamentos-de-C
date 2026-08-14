#include<stdio.h>
#include<stdlib.h>

int main(){
    int *lista = (int *) malloc(5 * sizeof(int)); // Reservamos memoria para 5 enteros

    if (lista == NULL) { // Verificamos si la memoria fue reservada correctamente
        printf("Error al reservar memoria.\n");
        return 1; // Salimos del programa con un código de error
    }

    printf("Ingrese 5 valores enteros:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", lista + i); // Almacenamos el valor ingresado en la memoria dinámica usando aritmética de punteros
    }

    printf("Valores almacenados en la memoria dinámica:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(lista + i)); // Imprimimos los valores almacenados usando aritmética de punteros
    }
    printf("\n");

    int adicionar;

    printf("¿Cuantos valores adicionales deseas agregar?\n");
    scanf("%d", &adicionar);

    int *nueva_lista = (int *) realloc(lista, (5 + adicionar) * sizeof(int)); // Redimensionamos la memoria para almacenar los valores adicionales

    if (nueva_lista == NULL) { // Verificamos si la memoria fue redimensionada correctamente
        printf("Error al redimensionar memoria.\n");
        free(lista); // Liberamos la memoria previamente reservada
        return 1; // Salimos del programa con un código de error
    }

    lista = nueva_lista; // Asignamos la nueva lista a la variable original

    printf("Ingrese %d valores adicionales:\n", adicionar);
    for(int i = 5; i < 5 + adicionar; i++){
        scanf("%d", lista + i); // Almacenamos el valor ingresado en la memoria dinámica usando aritmética de punteros
    }

    printf("Valores almacenados en la memoria dinámica después de redimensionar:\n");
    for(int i = 0; i < 5 + adicionar; i++){
        printf("%d ", *(lista + i)); // Imprimimos los valores almacenados usando aritmética de punteros
    }
    printf("\n");

    free(lista); // Liberamos la memoria reservada
    return 0; // Salimos del programa con un código de éxito
}