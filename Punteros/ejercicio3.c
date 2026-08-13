#include<stdio.h>

// Función para intercambiar los valores de dos enteros utilizando punteros
void intercambiar(int *a, int *b);

int main(){
    int a = 10;
    int b = 20;

    // Imprimimos los valores antes del intercambio
    printf("Antes del intercambio: a = %d, b = %d\n", a, b);
    intercambiar(&a, &b); // Pasamos las direcciones de memoria de a y b a la función intercambiar
    printf("Después del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}

// Definición de la función intercambiar
void intercambiar(int *a, int *b){
    int temp = *a; // Guardamos el valor de a en una variable temporal
    *a = *b; // Asignamos el valor de b a a
    *b = temp; // Asignamos el valor temporal (original de a) a b
}