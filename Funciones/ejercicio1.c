#include<stdio.h>

int suma(int a, int b){
    return a + b;
}

int main(){
    int num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    resultado = suma(num1, num2);

    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}