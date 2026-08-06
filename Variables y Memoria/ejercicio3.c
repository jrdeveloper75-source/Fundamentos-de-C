//Calcula el año aproximado de nacimiento a partir de la edad.
#include<stdio.h>

int main(){
    int edad;
    int año_actual = 2026;
    int año_nacimiento;

    printf("¿Cuantos años tienes?\n");
    scanf("%d", &edad);
    //Operación basica de resta para calcular el año de nacimiento
    printf("Asi que naciste en el año %d", año_actual - edad);
    return 0;
}