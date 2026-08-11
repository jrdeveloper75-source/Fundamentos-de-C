/*Este es un proyecto acumulativo de los fundamentos vistos en todo este repositorio. 
Se trata de una calculadora de gastos que permite al usuario ingresar sus ingresos y gastos, 
y luego calcular el balance final, dar un promedio. y mostrar un resumen al final.*/
#include<stdio.h>

int main(){
    //Variables para los gastos.
    float arriendo, servicios, transporte, comida, entretenimiento;
    //Variables para operaciones y resultados.
    float total, promedio, mayor_gasto;
    float presupuesto;
    //variables para clasificar gastos
    float bajo, medio;

    printf("Bienvenido a la calculadora de gastos. Por favor, ingresa tu presupuesto mensual:\n");
    scanf("%f", &presupuesto);

    if (presupuesto <= 0){
        printf("El presupuesto debe ser un número positivo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }

    printf("Ahora ingresa tus gastos en las siguientes categorías:\n");
    printf("Gasto en arriendo: ");
    scanf("%f", &arriendo);

    if(arriendo < 0){
        printf("El gasto en arriendo no puede ser negativo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }

    printf("Gasto en servicios: ");
    scanf("%f", &servicios);

    if(servicios < 0){
        printf("El gasto en servicios no puede ser negativo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }

    printf("Gasto en transporte: ");
    scanf("%f", &transporte);

    if(transporte < 0){
        printf("El gasto en transporte no puede ser negativo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }
    printf("Gasto en comida: ");
    scanf("%f", &comida);

    if(comida < 0){
        printf("El gasto en comida no puede ser negativo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }
    printf("Gasto en entretenimiento: ");
    scanf("%f", &entretenimiento);
    
    if(entretenimiento < 0){
        printf("El gasto en entretenimiento no puede ser negativo. Por favor, reinicia el programa e ingresa un valor válido.\n");
        return 1; // Salir del programa con un código de error.
    }

    //Calcular el total de gastos.
    total = arriendo + servicios + transporte + comida + entretenimiento;
    promedio = total / 5;

    //Mostrar el resumen.
    printf("Resumen de gastos:\n");
    printf("Arriendo: %.2f\n", arriendo);
    printf("Servicios: %.2f\n", servicios);
    printf("Transporte: %.2f\n", transporte);
    printf("Comida: %.2f\n", comida);
    printf("Entretenimiento: %.2f\n", entretenimiento);
    printf("Total de gastos: %.2f\n", total);
    printf("Promedio de gastos: %.2f\n", promedio);
    printf("Presupuesto mensual: %.2f\n", presupuesto);

    if(total > presupuesto){
        printf("¡Cuidado! Has excedido tu presupuesto mensual.\n");
    } else {
        printf("¡Bien hecho! Estás dentro de tu presupuesto mensual.\n");
    }

    mayor_gasto = arriendo;
    
    if(servicios > mayor_gasto){
        mayor_gasto = servicios;
    }
    if(transporte > mayor_gasto){
        mayor_gasto = transporte;
    }
    if(comida > mayor_gasto){
        mayor_gasto = comida;
    }
    if(entretenimiento > mayor_gasto){
        mayor_gasto = entretenimiento;
    }
    printf("El mayor gasto fue: %.2f\n", mayor_gasto);

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