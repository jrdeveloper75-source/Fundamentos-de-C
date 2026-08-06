//Pide dos números. Muestra: suma, resta, multiplicación, división, residuo
#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Escribe dos números y te daré los resultados de varias operaciones:\n");
    scanf("%d %d", &a, &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicación: %d\n", a * b);
    printf("División: %d\n", a / b);
    printf("Residuo: %d\n", a % b);

    return 0;
}