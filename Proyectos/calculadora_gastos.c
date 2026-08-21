/*Este es un proyecto acumulativo de los fundamentos vistos en todo este repositorio. 
Se trata de una calculadora de gastos que permite al usuario ingresar sus ingresos y gastos, 
y luego calcular el balance final, dar un promedio. y mostrar un resumen al final.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void menu(float *gasto, int *cantidad_gastos);
void gastos(float *gasto, int *cantidad_gastos);
void mostrar_gastos(float *gasto, int *cantidad_gastos);
float menor_gasto(float *gasto, int *cantidad_gastos);
float mayor_gasto(float *gasto, int *cantidad_gastos);
float total_gastos(float *gasto, int *cantidad_gastos);
float promedio_gastos(float *gasto, int *cantidad_gastos);
void evaluar_presupuesto(float total);

int main(){
    int *cantidad_gastos = (int *) malloc(sizeof(int)); // Reservamos memoria para un entero
    float *gasto = (float *) malloc(*cantidad_gastos * sizeof(float)); // Reservamos memoria para 'cantidad_gastos' flotantes

    if (gasto == NULL) { // Verificamos si la memoria fue reservada correctamente
        printf("Error al reservar memoria.\n");
        return 1; // Salimos del programa con un código de error
    }

    menu(gasto, cantidad_gastos); // Llamamos a la función menu para mostrar las opciones al usuario
    return 0;
}

void menu(float *gasto, int *cantidad_gastos){
    printf("=== CALCULADORA DE GASTOS ===\n");
    printf("1. Ingresar gastos\n");
    printf("2. Mostrar gastos\n");
    printf("3. Calcular menor gasto\n");
    printf("4. Calcular mayor gasto\n");
    printf("5. Calcular total de gastos\n");
    printf("6. Calcular promedio de gastos\n");
    printf("7. Evaluar presupuesto\n");
    printf("8. Salir\n");

    int opcion;
    int sub_opcion;
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            // Llamar a la función para ingresar gastos
            gastos(gasto, cantidad_gastos); // Llamamos a la función gastos y almacenamos los gastos
            break;
        case 2:
            // Llamar a la función para mostrar gastos
            mostrar_gastos(gasto, cantidad_gastos); // Llamamos a la función mostrar
            break;
        case 3:
            // Llamar a la función para calcular menor gasto
            printf("Menor gasto: %.2f\n", menor_gasto(gasto, cantidad_gastos)); // Llamamos a la función menor_gasto para calcular el menor gasto
            break;
        case 4:
            // Llamar a la función para calcular mayor gasto
            printf("Mayor gasto: %.2f\n", mayor_gasto(gasto, cantidad_gastos)); // Llamamos a la función mayor_gasto para calcular el mayor gasto
            break;
        case 5:
            // Llamar a la función para calcular total de gastos
            float total = total_gastos(gasto, cantidad_gastos); // Calculamos el total de gastos
            break;
        case 6:
            // Llamar a la función para calcular promedio de gastos
            promedio_gastos(gasto, cantidad_gastos); // Llamamos a la función promedio_gastos para calcular y mostrar el promedio
            break;
        case 7:
            // Llamar a la función para evaluar presupuesto
            evaluar_presupuesto(total); // Llamamos a la función evaluar_presupuesto para dar retroalimentación
            break;
        case 8:
            printf("Saliendo del programa...\n");
            exit(0);
        default:
            printf("Opción inválida. Por favor, selecciona una opción válida.\n");
    }

    printf("1. ¿Volver al menú principal?\n");
    printf("Presiona cualquier numero para salir del programa\n");
    scanf("%d", &sub_opcion);
    if(sub_opcion == 1){
        menu(gasto, cantidad_gastos); // Llamamos a la función menu para mostrar las opciones al usuario
    } else{
        printf("Saliendo del programa...\n");
        exit(0);
    }
}

void gastos(float *gasto, int *cantidad_gastos){
    *cantidad_gastos = 1; // Inicializamos la cantidad de gastos a 1
    for(int contador = 0; contador < *cantidad_gastos; contador++){
        printf("Ingresa el gasto número %d:\n", contador+1);
        scanf("%f", gasto + contador); // Almacenamos el gasto ingresado en el arreglo usando aritmética de punteros

        if(*(gasto + contador) >= 0){
            printf("Gasto ingresado: %.2f\n", *(gasto + contador));
        } else {
            printf("Gasto inválido. Por favor, ingresa un valor positivo.\n");
            contador--; // Decrementamos el contador para repetir la iteración
        }

        printf("¿Deseas ingresar otro gasto? (1 para sí, 0 para no):\n");
        int opcion;
        scanf("%d", &opcion);
        if(opcion == 1){
            (*cantidad_gastos)++; // Incrementamos la cantidad de gastos
            gasto = (float *) realloc(gasto, *cantidad_gastos * sizeof(float)); // Redimensionamos la memoria para almacenar los gastos adicionales
            if (gasto == NULL) { // Verificamos si la memoria fue redimensionada correctamente
                printf("Error al redimensionar memoria.\n");
                exit(1); // Salimos del programa con un código de error
            }
        } else {
            break; // Salimos del bucle si el usuario no desea ingresar más gastos 
        }
    }
}

void mostrar_gastos(float *gasto, int *cantidad_gastos){
    printf("Gastos ingresados:\n");
    for(int contador = 0; contador < *cantidad_gastos; contador++){
        printf("Gasto número %d: %.2f\n", contador+1, *(gasto + contador)); // Imprimimos los gastos almacenados usando aritmética de punteros
    }
}

float menor_gasto(float *gasto, int *cantidad_gastos){
    float menor_gasto = 0.0; // Inicializamos el menor a 0

    for(int contador = 0; contador < *cantidad_gastos; contador++){
        if(*(gasto + contador) >= 0){
            if(menor_gasto == 0.0){
                menor_gasto = *(gasto + contador); // Inicializamos el menor gasto con el primer gasto ingresado
            }else if (*(gasto + contador) < menor_gasto){
                menor_gasto = *(gasto + contador);
            }
        }
    }
    return menor_gasto;
}

float mayor_gasto(float *gasto, int *cantidad_gastos){
    float mayor_gasto = 0.0; // Inicializamos el menor y mayor gasto a 0

    for(int contador = 0; contador < *cantidad_gastos; contador++){
        if(*(gasto + contador) >= 0){
            // Actualizamos el mayor y menor gasto
            if(*(gasto + contador) > mayor_gasto){
                mayor_gasto = *(gasto + contador);
            }
        }
    }
    return mayor_gasto;
}

float total_gastos(float *gasto, int *cantidad_gastos){
    float total = 0.0;
    
    for(int contador = 0; contador < *cantidad_gastos; contador++){
        total += *(gasto + contador);
    }

    printf("Total: %.2f\n", total);

    return total;
}

float promedio_gastos(float *gasto, int *cantidad_gastos){
    float promedio;

    promedio = total_gastos(gasto, cantidad_gastos) / *cantidad_gastos;
    printf("Promedio: %.2f\n", promedio);

    return promedio;
}

void evaluar_presupuesto(float total){
    //variables para clasificar gastos
    float bajo, medio;
    float presupuesto;

    printf("Ingresa tu presupuesto mensual:\n");
    scanf("%f", &presupuesto);

    if(total > presupuesto){
        printf("¡Cuidado! Has excedido tu presupuesto mensual.\n");
    } else {
        printf("¡Bien hecho! Estás dentro de tu presupuesto mensual.\n");
    }

    bajo = presupuesto * 0.2;
    medio = presupuesto * 0.5;

    if (total < bajo){
        printf("Tus gastos son bajos en comparación con tu presupuesto.\n");
    } else if (total >= bajo && total <= medio){
        printf("Tus gastos son moderados en comparación con tu presupuesto.\n");
    } else {
        printf("Tus gastos son altos en comparación con tu presupuesto.\n");
    }
}