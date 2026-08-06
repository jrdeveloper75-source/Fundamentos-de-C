/*Este es un proyecto acumulativo de los fundamentos vistos en todo este repositorio. 
Se trata de una calculadora de gastos que permite al usuario ingresar sus ingresos y gastos, 
y luego calcular el balance final, dar un promedio. y mostrar un resumen al final.*/
#include<stdio.h>

int main(){
    //Variables para los gastos.
    float arriendo, servicios, transporte, comida, entretenimiento, total, promedio;

    printf("Bienvenido a la calculadora de gastos. Por favor, ingresa tus gastos mensuales:\n");
    printf("Gasto en arriendo: ");
    scanf("%f", &arriendo);
    printf("Gasto en servicios: ");
    scanf("%f", &servicios);
    printf("Gasto en transporte: ");
    scanf("%f", &transporte);
    printf("Gasto en comida: ");
    scanf("%f", &comida);
    printf("Gasto en entretenimiento: ");
    scanf("%f", &entretenimiento);

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
}