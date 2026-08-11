/*Este es un proyecto acumulativo de los fundamentos vistos en todo este repositorio. 
Se trata de una calculadora de gastos que permite al usuario ingresar sus ingresos y gastos, 
y luego calcular el balance final, dar un promedio. y mostrar un resumen al final.*/
#include<stdio.h>

int main(){
    //Variables para los gastos.
    float gasto;
    //Variables para operaciones y resultados.
    float total, promedio, presupuesto;
    float mayor_gasto = 0.0; // Inicializamos el mayor gasto a 0
    float menor_gasto = 0.0; // Inicializamos el menor gasto a 0
    //variables para clasificar gastos
    float bajo, medio;
    int contador, cantidad_gastos;

    printf("Bienvenido a la calculadora de gastos. Por favor, ingresa tu presupuesto mensual:\n");
    scanf("%f", &presupuesto);

    if (presupuesto <= 0){
        printf("El presupuesto debe ser un número positivo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }

    printf("¿Cuántos gastos deseas ingresar?\n");
    scanf("%d", &cantidad_gastos);

    for(contador = 1; contador <= cantidad_gastos; contador++){
        printf("Ingresa el gasto número %d:\n", contador);
        scanf("%f", &gasto);
        total += gasto;

        if(gasto >= 0){
            if(menor_gasto == 0.0){
                menor_gasto = gasto;
            }
            // Actualizamos el mayor y menor gasto
            if(gasto > mayor_gasto){
                mayor_gasto = gasto;
            }
            else if (gasto < mayor_gasto && gasto < menor_gasto){
                menor_gasto = gasto;
            }
        }else{
            printf("El gasto ingresado no es válido. Por favor, ingresa un número positivo.\n");
            contador--; // Decrementamos el contador para repetir la entrada del gasto
            continue; // Saltamos a la siguiente iteración del bucle
        }

        // Calculamos el promedio solo después de ingresar todos los gastos
        if(contador == cantidad_gastos){
            promedio = total / cantidad_gastos;
        }
    }

    printf("Total: %.2f\n", total);
    printf("Promedio: %.2f\n", promedio);
    printf("Mayor gasto: %.2f\n", mayor_gasto);
    printf("Menor gasto: %.2f\n", menor_gasto);

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

    return 0;
}