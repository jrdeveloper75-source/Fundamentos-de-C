#include<stdio.h>
#include<stdlib.h>

int main(){
    int cantidad, suma = 0, promedio, mayor = 0, menor = 0;

    printf("Ingrese la cantidad de elementos que desea almacenar:\n");
    scanf("%d", &cantidad);

    int *ptr = (int *) calloc(cantidad, sizeof(int)); // Reservamos memoria para 'cantidad' enteros

    for(int i = 0; i < cantidad; i++){
        printf("Valor de la posicion %d: %d\n", i+1, *(ptr + i)); // Imprimimos el valor almacenado en la memoria dinámica usando aritmética de punteros
    }

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
        suma += *(ptr + i); // Sumamos los valores almacenados
        if(*(ptr + i) > mayor){
            mayor = *(ptr + i); // Actualizamos el mayor valor
        }
        if(menor == 0 || *(ptr + i) < menor){
            menor = *(ptr + i); // Actualizamos el menor valor
        }
    }
    promedio = suma / cantidad;

    printf("Suma: %d\n", suma);
    printf("Promedio: %d\n", promedio);
    printf("Mayor valor: %d\n", mayor);
    printf("Menor valor: %d\n", menor);

    free(ptr); // Liberamos la memoria reservada
    return 0; // Salimos del programa con un código de éxito   
}