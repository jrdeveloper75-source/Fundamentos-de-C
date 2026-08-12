#include<stdio.h>

void tabla_multiplicar(int x){
    for(int contador = 1; contador <= 10; contador++){
        printf("%d x %d = %d\n", x, contador, x * contador);
    }
}

int main(){
    int numero;

    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &numero);

    tabla_multiplicar(numero);

    return 0;
}