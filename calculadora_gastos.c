/*Este es un proyecto acumulativo de los fundamentos vistos en todo este repositorio. 
Se trata de una calculadora de gastos que permite al usuario ingresar sus ingresos y gastos, 
y luego calcular el balance final, dar un promedio. y mostrar un resumen al final.*/
#include<stdio.h>
#include<string.h>

void gastos(int gasto[],int cantidad_gastos){
    float menor_gasto = 0.0, mayor_gasto = 0.0; // Inicializamos el menor y mayor gasto a 0

    for(int contador = 0; contador < cantidad_gastos; contador++){
        printf("Ingresa el gasto número %d:\n", contador);
        scanf("%d", &gasto[contador]);

        if(gasto[contador] >= 0){
            if(menor_gasto == 0.0){
                menor_gasto = gasto[contador]; // Inicializamos el menor gasto con el primer gasto ingresado
            }
            // Actualizamos el mayor y menor gasto
            if(gasto[contador] > mayor_gasto){
                mayor_gasto = gasto[contador];
            }
            else if (gasto[contador] < menor_gasto){
                menor_gasto = gasto[contador];
            }
        }else{
            printf("El gasto ingresado no es válido. Por favor, ingresa un número positivo.\n");
            contador--; // Decrementamos el contador para repetir la entrada del gasto
            continue; // Saltamos a la siguiente iteración del bucle
        }
    }

    printf("Mayor gasto: %.2f\n", mayor_gasto);
    printf("Menor gasto: %.2f\n", menor_gasto);
}

float total_gastos(int gasto[], int cantidad_gastos){
    float total = 0.0;
    
    for(int contador = 0; contador < cantidad_gastos; contador++){
        total += gasto[contador];
    }

    printf("Total: %.2f\n", total);

    return total;
}

float promedio_gastos(int gasto[], int cantidad_gastos){
    float promedio;

    promedio = total_gastos(gasto, cantidad_gastos) / cantidad_gastos;
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

int main(){
    int gasto[100]; // Declaramos un arreglo para almacenar los gastos
    int cantidad_gastos;
    float total;

    printf("¿Cuántos gastos deseas ingresar?\n");
    scanf("%d", &cantidad_gastos);

    gastos(gasto, cantidad_gastos); // Llamamos a la función gastos y almacenamos los gastos
    total = total_gastos(gasto, cantidad_gastos); // Calculamos el total de gastos
    evaluar_presupuesto(total); // Llamamos a la función evaluar_presupuesto para dar retroalimentación
    promedio_gastos(gasto, cantidad_gastos); // Llamamos a la función promedio_gastos para calcular y mostrar el promedio

    return 0;
}