//Calcular la suma de todos los numeros hasta el numero ingresado por el usuario
#include <stdio.h>

int main(){
    int contador, n;
    int suma = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    for(contador = 1; contador <= n; contador++){
        suma += contador;
    }

    printf("La suma de los numeros del 1 al %d es: %d\n", n, suma);
    return 0;
}
