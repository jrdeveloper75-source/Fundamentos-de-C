//Calcular expresiones
#include <stdio.h>
int main() {
    int a = 5;
    int b = 3;
    int resultado1 = a + b * 2; // Multiplicación primero, luego suma
    int resultado2 = (a + b) * 2; // Paréntesis
    int resultado3 = a / b + 1; // División primero, luego suma
    int resultado4 = (a / b) + 1; // Paréntesis cambian el orden de evaluación
    printf("Resultado de a + b * 2: %d\n", resultado1);
    printf("Resultado de (a + b) * 2: %d\n", resultado2);
    printf("Resultado de a / b + 1: %d\n", resultado3);
    printf("Resultado de (a / b) + 1: %d\n", resultado4);
    return 0;
}